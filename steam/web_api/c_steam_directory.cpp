#include "c_steam_directory.hpp"
#include "c_web_api.hpp"

#include "../../helpers/json.hpp"

#include <unordered_map>
#include <sstream>

std::vector<c_steam_directory::steam_server> c_steam_directory::load_servers() {
	std::unordered_map<std::string, std::string> args{};
	args["cellid"] = "0";
	args["maxcount"] = "30";

	auto result = c_web_api::call_endpoint(c_web_api::e_request_type::k_http_get, "ISteamDirectory", "GetCMList", args);
	if (!result.empty()) {
		nlohmann::json cm_list;
		try {
			std::stringstream(result) >> cm_list;
		} catch (...) {
			return {};
		}

		if (!cm_list.contains("response"))
			return {};

		for (const auto& tcp_server : cm_list["response"]["serverlist"].get<std::vector<std::string>>()) {
			auto server_ip = tcp_server.substr(0, tcp_server.find(':'));
			auto server_port = std::stoi(tcp_server.substr(tcp_server.find(':') + 1));

			if (std::find_if(m_servers.begin(), m_servers.end(), [&](const auto& server) {
				return server.address == server_ip && server.port == server_port;
			}) != m_servers.end())
				continue;

			m_servers.emplace_back();
			m_servers.back().m_type = steam_server::e_server_type::k_tcp;
			m_servers.back().address = server_ip;
			m_servers.back().port = server_port;
		}
	}

	return m_servers;
}