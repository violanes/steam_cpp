#include "c_encrypted_connection.hpp"
#include "encryption/c_encryption_with_hmac.hpp"
#include "../steam_language.hpp"

#include <cryptopp/crc.h>
#include <cryptopp/rsa.h>

c_encrypted_connection::c_encrypted_connection(const std::shared_ptr<i_connection>& connection) {
	m_state = e_state::k_disconnected;
	m_connection = connection;
	m_connection->set_read_callback([&](const auto& buffer) -> void { on_receive(buffer); });
}

bool c_encrypted_connection::connect() {
	auto connected = m_connection->connect();
	if (connected)
		m_state = e_state::k_connected;

	return connected;
}

void c_encrypted_connection::disconnect() {

}

void c_encrypted_connection::send(const std::vector<uint8_t>& binary) {
	auto buffer = binary;
	if (m_state == e_state::k_encrypted)
		m_encryption->process_outgoing(&buffer);

	m_connection->send(buffer);
}

void c_encrypted_connection::serve() {
	m_connection->serve();
}

void c_encrypted_connection::on_receive(const std::vector<uint8_t>& buffer) {
	if (m_state == e_state::k_encrypted) {
		auto binary = buffer;
		m_encryption->process_incoming(&binary);

		if (fn_on_read)
			fn_on_read(binary);

		return;
	}

	auto message = buffer;
	auto header = reinterpret_cast<msg_header*>(message.data());

	auto msg_type = static_cast<EMsg>(header->msg & ~0x80000000);
	switch (msg_type) {
		case ChannelEncryptRequest:
			handle_encrypt_request(&message);
			break;
		case ChannelEncryptResult:
			handle_encrypt_result(&message);
			break;
		default:
			printf("received unknown message : %d\n", header->msg);
			break;
	}
}

void c_encrypted_connection::handle_encrypt_request(std::vector<uint8_t>* data) {
	uint32_t payload_len = data->size() - sizeof(msg_header) - sizeof(MsgChannelEncryptRequest);
	std::vector<uint8_t> payload = {};

	if (payload_len >= 16) {
		payload = std::vector<uint8_t>(data->begin() + sizeof(msg_header) + sizeof(MsgChannelEncryptRequest),
									   data->begin() + sizeof(msg_header) + sizeof(MsgChannelEncryptRequest) + payload_len);
	}

	std::vector<uint8_t> handshake_blob = {};

	m_session_key.resize(32);
	m_rnd_generator.GenerateBlock(m_session_key.data(), m_session_key.size());

	CryptoPP::RSA::PublicKey rsa_key;
	CryptoPP::ArraySource source(g_public_key.data(), g_public_key.size(), true);
	rsa_key.Load(source);

	CryptoPP::RSAES_OAEP_SHA_Encryptor rsa(rsa_key);

	if (!payload.empty()) {
		m_encryption = std::make_shared<c_encryption_with_hmac>(m_session_key);

		std::vector<uint8_t> encryption_blob{};
		encryption_blob.insert(encryption_blob.end(), m_session_key.begin(), m_session_key.end());
		//encryption_blob.insert(encryption_blob.end(), payload.begin(), payload.end());

		handshake_blob.resize(rsa.CiphertextLength(encryption_blob.size()));
		rsa.Encrypt(m_rnd_generator, encryption_blob.data(), encryption_blob.size(), handshake_blob.data());
	} else {
		printf("net filter encryption...\n");

		handshake_blob.resize(rsa.CiphertextLength(m_session_key.size()));
		rsa.Encrypt(m_rnd_generator, m_session_key.data(), m_session_key.size(), handshake_blob.data());
	}

	std::vector<uint8_t> response{};
	response.insert(response.end(), handshake_blob.begin(), handshake_blob.end());
	response.insert(response.end(), CryptoPP::CRC32().DigestSize() + sizeof(uint32_t), 0);

	CryptoPP::CRC32().CalculateDigest(response.data() + handshake_blob.size(), handshake_blob.data(), handshake_blob.size());

	response.insert(response.begin(), sizeof(MsgChannelEncryptResponse), 0);

	auto enc_resp = reinterpret_cast<MsgChannelEncryptResponse*>(response.data());
	enc_resp->protocolVersion = 1;
	enc_resp->keySize = 128;

	response.insert(response.begin(), data->begin(), data->begin() + sizeof(msg_header));

	auto header = reinterpret_cast<msg_header*>(response.data());
	header->msg = ChannelEncryptResponse;

	m_state = e_state::k_challenged;
	m_connection->send(response);
}

void c_encrypted_connection::handle_encrypt_result(std::vector<uint8_t>* data) {
	auto enc_result = reinterpret_cast<const MsgChannelEncryptResult*>(data->data() + sizeof(msg_header));
	if (enc_result->result != static_cast<uint32_t>(EResult::OK)) {
		printf("something has failed...\n");
		return;
	}

	m_state = e_state::k_encrypted;

	if (fn_on_connect)
		fn_on_connect();
}

/*
void c_encrypted_connection::send_shit(const google::protobuf::Message &message) {
	std::vector<uint8_t> buf{};

	CMsgProtoBufHeader proto;
	proto.set_steamid(76561197960265728);
	proto.set_client_sessionid(0);

	buf.insert(buf.end(), sizeof(MsgHdrProtoBuf) + proto.ByteSizeLong() + message.ByteSizeLong(), 0);

	auto header = reinterpret_cast<MsgHdrProtoBuf*>(buf.data());
	header->headerLength = (int) proto.ByteSizeLong();
	header->msg = (uint32_t)EMsg::ClientLogon | 0x80000000;

	proto.SerializeToArray(header->proto, (int)proto.ByteSizeLong());
	message.SerializeToArray(header->proto + proto.ByteSizeLong(), (int)message.ByteSizeLong());

	send(buf);
}*/