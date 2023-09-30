#include "cmc_client.hpp"
#include "../networking/c_tcp_connection.hpp"
#include "../structs/steammessages_clientserver.pb.h"

#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/iostreams/copy.hpp>

cmc_client::cmc_client() = default;

bool cmc_client::connect(std::string_view ip, uint16_t port) {
	m_connection = std::make_unique<c_encrypted_connection>(std::make_shared<c_tcp_connection>(ip, port));
	m_connection->set_read_callback([&](const std::vector<uint8_t>& buffer) -> void { on_read(buffer); });

	if (!m_connection->connect())
		return false;

	bool connected = true;
	bool server_responded = false;

	m_connection->set_connect_callback([&]() -> void {
		CMsgClientHello hello_msg;
		hello_msg.set_protocol_version(65580);
		send(EMsg::ClientHello, hello_msg);
		server_responded = true;
	});
	m_connection->set_disconnect_callback([&](...) -> void {
		connected = false;
		server_responded = true;
	});

	// for some reason, when building under MSVC mutex crashes right after unlocking it
	// probably caused by incorrect mutex ownership transfer, needs research
	// interestingly, when building with GCC/MinGW mutex locks itself fine :thinking:
	// TODO: change with proper unique locks / mutex
	while (!server_responded)
		std::this_thread::sleep_for(std::chrono::milliseconds(100));

	m_is_connected = connected;
	return connected;
}

void cmc_client::send(EMsg type, const google::protobuf::Message& message) {
	std::vector<uint8_t> buffer{};

	CMsgProtoBufHeader proto_header;
	proto_header.set_steamid(m_steam_id);
	proto_header.set_client_sessionid((int)m_session_id);

	if (!m_next_job_name.empty()) {
		proto_header.set_target_job_name(m_next_job_name);
		m_next_job_name.clear();
	}

	if (m_next_job_id > 0) {
		proto_header.set_jobid_source(m_next_job_id);
		m_next_job_id = 0;
	}

	buffer.insert(buffer.end(), sizeof(MsgHdrProtoBuf) + proto_header.ByteSizeLong() + message.ByteSizeLong(), 0);

	auto header = reinterpret_cast<MsgHdrProtoBuf*>(buffer.data());
	header->headerLength = (int)proto_header.ByteSizeLong();
	header->msg = static_cast<uint32_t>(type) | 0x80000000;

	proto_header.SerializeToArray(header->proto, (int)proto_header.ByteSizeLong());
	message.SerializeToArray(header->proto + (int)proto_header.ByteSizeLong(), (int)message.ByteSizeLong());

	m_connection->send(buffer);
}

void cmc_client::send(const std::vector<uint8_t>& buffer) {
	m_connection->send(buffer);
}

void cmc_client::heartbeat() {
	while (m_is_connected) {
		if (!m_heartbeat_delay)
			continue;

		std::this_thread::sleep_for(std::chrono::seconds(m_heartbeat_delay));

		CMsgClientHeartBeat heart_beat;
		send(EMsg::ClientHeartBeat, heart_beat);
	}
}

void cmc_client::on_read(const std::vector<uint8_t>& buffer) {
	auto prologue = *reinterpret_cast<const uint32_t*>(buffer.data());
	auto type = static_cast<EMsg>(prologue & ~0x80000000);
	std::vector<uint8_t> message;
	uint64_t job_id;

	if (*reinterpret_cast<const uint32_t*>(buffer.data()) & 0x80000000) {
		auto header = reinterpret_cast<const MsgHdrProtoBuf*>(buffer.data());
		CMsgProtoBufHeader proto_header;
		proto_header.ParseFromArray(header->proto, header->headerLength);

		if (!m_session_id && header->headerLength > 0) {
			m_session_id = proto_header.client_sessionid();
			m_steam_id = proto_header.steamid();
		}

		job_id = proto_header.jobid_source();
		message = std::vector<uint8_t>(buffer.begin() + sizeof(MsgHdrProtoBuf) + header->headerLength, buffer.end());

		handle_message(type, message, proto_header, job_id);
	} else {
		auto header = reinterpret_cast<const ExtendedClientMsgHdr*>(buffer.data());
		job_id = header->sourceJobID;
		message = std::vector<uint8_t>(buffer.begin() + sizeof(ExtendedClientMsgHdr), buffer.end());

		handle_message(type, message, {}, job_id);
	}
}

void cmc_client::handle_message(EMsg type, const std::vector<uint8_t>& message, const CMsgProtoBufHeader& proto_header, uint64_t job_id) {
	switch (type) {
		case Multi: {
			CMsgMulti msg_multi;
			msg_multi.ParseFromArray(message.data(), (int)message.size());

			auto payload = std::vector<char>(msg_multi.message_body().begin(), msg_multi.message_body().end());

			if (msg_multi.size_unzipped()) {
				boost::iostreams::filtering_streambuf<boost::iostreams::input> ostream;
				ostream.push(boost::iostreams::gzip_decompressor());
				ostream.push(boost::iostreams::array_source(payload.data(), payload.size()));

				std::stringstream stream;
				boost::iostreams::copy(ostream, stream);

				auto decompressed = stream.str();
				payload = std::vector<char>(decompressed.begin(), decompressed.end());
			}

			while (!payload.empty()) {
				auto chunk_size = *reinterpret_cast<const uint32_t*>(payload.data());
				on_read(std::vector<uint8_t>(payload.begin() + sizeof(chunk_size), payload.begin() + sizeof(chunk_size) + chunk_size));
				payload.erase(payload.begin(), payload.begin() + sizeof(chunk_size) + chunk_size);
			}
			break;
		}
		case ClientLogOnResponse: {
			CMsgClientLogonResponse logon;
			logon.ParseFromArray(message.data(), (int)message.size());

			m_heartbeat_delay = logon.legacy_out_of_game_heartbeat_seconds();

			if (!m_heart_beat.joinable()) {
				m_heart_beat = std::thread([&]() -> void {
					heartbeat();
				});
			}

			if (m_on_logon)
				m_on_logon(logon);
			break;
		}
		case ClientLoggedOff: {
			m_session_id = 0;
			m_steam_id = 0;

			m_heartbeat_delay = 0;

			if (m_heart_beat.joinable())
				m_heart_beat.detach();

			CMsgClientLoggedOff logoff;
			logoff.ParseFromArray(message.data(), (int)message.size());

			if (m_on_logoff)
				m_on_logoff(logoff);
			break;
		}
		case ClientCMList: {
			CMsgClientCMList cm_list;
			cm_list.ParseFromArray(message.data(), (int)message.size());
			break;
		}
		default: {
			for (const auto& handler : m_handlers) {
				if (!handler.second->has_handler(type))
					continue;

				proto_response resp;
				resp.header = proto_header;
				resp.buffer = message;
				handler.second->execute(type, resp);
				return;
			}

			//printf("received unacknowledged message of type : %d (buffer %zu)\n", type, message.size());
			break;
		}
	}
}
