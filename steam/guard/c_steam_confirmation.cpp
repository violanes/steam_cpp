#include "c_steam_guard_account.hpp"
#include "../web_api/c_web_api.hpp"

#include <sstream>

c_steam_confirmation::c_steam_confirmation(const nlohmann::json& data, c_steam_guard_account* account) {
	m_id = data["id"].get<std::string>();
	m_nonce = data["nonce"].get<std::string>();
	m_creator_id = data["creator_id"].get<std::string>();

	m_account = account;
}

bool c_steam_confirmation::accept() {
	return send_confirmation("allow");
}

bool c_steam_confirmation::decline() {
	return send_confirmation("cancel");
}

bool c_steam_confirmation::send_confirmation(std::string_view command) {
	std::string url = "https://steamcommunity.com/mobileconf/ajaxop?";
	url.append("op=").append(command).append("&");
	url.append(m_account->get_confirmation_query((command == "allow") ? "accept" : "reject"));
	url.append("&cid=").append(m_id).append("&ck=").append(m_nonce);

	auto result = c_web_api::get(url, m_account->get_session()->get_cookies());
	nlohmann::json resp;
	try {
		std::stringstream(result) >> resp;
		return resp["success"].get<bool>();
	} catch (...) {
		throw std::runtime_error("Failed to parse confirmation response");
	}

	return false;
}
