#include "c_steam_client.hpp"
#include "../web_api/c_steam_directory.hpp"

#include <random>

c_steam_client::c_steam_client() {
	m_web_api = std::make_unique<c_web_api>();
	m_steam_auth = std::make_unique<c_steam_authentication>(this);

	m_handlers["steam_user"] = std::make_shared<c_steam_user>(this);
	m_handlers["steam_friends"] = std::make_shared<c_steam_friends>(this);
	m_handlers["steam_trading"] = std::make_shared<c_steam_trading>(this);
	m_handlers["steam_unified_messages"] = std::make_shared<c_steam_unified_messages>(this);

	m_on_logon = [&](const CMsgClientLogonResponse& response) {
		if (std::find(m_callbacks.begin(), m_callbacks.end(), EMsg::ClientLogOnResponse) == m_callbacks.end())
			return;

		c_steam_user::c_logon_result result{};
		result.result = static_cast<EResult>(response.eresult());
		result.extended_result = response.eresult_extended();
		result.success = (result.result == EResult::OK);

		get_user()->logon_processed(result);
	};

	m_on_logoff = [&](const CMsgClientLoggedOff& logoff) {
		if (std::find(m_callbacks.begin(), m_callbacks.end(), EMsg::ClientLoggedOff) == m_callbacks.end())
			return;

		get_user()->logoff_processed(logoff);
	};
}

bool c_steam_client::connect() {
	c_steam_directory directory;
	auto servers = directory.load_servers();

	if (servers.empty())
		return false;

	// pick random server from parsed CM list
	std::shuffle(servers.begin(), servers.end(), std::random_device());
	return cmc_client::connect(servers.begin()->address, servers.begin()->port);
}

void c_steam_client::send(EMsg type, const google::protobuf::Message& message) {
	cmc_client::send(type, message);
}

void c_steam_client::send(const std::vector<uint8_t>& buffer) {
	cmc_client::send(buffer);
}

void c_steam_client::add_callback(EMsg callback_type) {
	if (std::find(m_callbacks.begin(), m_callbacks.end(), callback_type) == m_callbacks.end())
		m_callbacks.emplace_back(callback_type);
}
