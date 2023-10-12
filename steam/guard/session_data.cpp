#include "session_data.hpp"
#include "../../helpers/json.hpp"
#include "../web_api/c_web_api.hpp"

#include <random>
#include <algorithm>
#include <sstream>
#include <regex>
#include <cryptopp/filters.h>
#include <cryptopp/base64.h>
#include <curl/curl.h>

session_data::session_data(uint64_t steam_id, std::string_view access_token, std::string_view refresh_token) {
	m_steam_id = steam_id;
	m_access_token = access_token;
	m_refresh_token = refresh_token;
}

void session_data::refresh_access_token() {
	auto encoded_jwt = m_access_token.substr(m_access_token.find( '.') + 1);
	encoded_jwt = encoded_jwt.substr(0, encoded_jwt.find('.'));
	encoded_jwt = std::regex_replace(encoded_jwt, std::regex("-"), "+");
	encoded_jwt = std::regex_replace(encoded_jwt, std::regex("_"), "/");

	if (encoded_jwt.length() % 4)
		encoded_jwt.append(std::string(4 - encoded_jwt.length() % 4, '='));

	std::string payload;
	CryptoPP::StringSource base64ss(encoded_jwt, true, new CryptoPP::Base64Decoder(
		new CryptoPP::StringSink(payload)));

	nlohmann::json jwt;
	std::stringstream(payload) >> jwt;

	if (jwt["exp"].get<uint64_t>() > std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count())
		return;

	std::unordered_map<std::string, std::string> post_params{};
	post_params["refresh_token"] = m_refresh_token;
	post_params["steamid"] = std::to_string(m_steam_id);

	auto result = c_web_api::post("https://api.steampowered.com/IAuthenticationService/GenerateAccessTokenForApp/v1/",
		"", post_params);

	nlohmann::json token_response;
	try {
		std::stringstream(result) >> token_response;
	} catch (...) {
		std::cerr << "failed to parse json response IAuthenticationService/GenerateAccessTokenForApp" << std::endl;
		return;
	}

	if (token_response.contains("response") && token_response["response"].contains("access_token"))
		m_access_token = token_response["response"]["access_token"].get<std::string>();

	// initialize a session id by entering the main page as an authorized user
	c_web_api::get("https://steamcommunity.com", get_cookies());
}

void session_data::refresh_api_key() {
	auto result = c_web_api::get("https://steamcommunity.com/dev/apikey?l=english", get_cookies());

	std::regex pattern("<p>Key: ([0-9A-F]+)<\\/p>");
	std::smatch match;
	if (!std::regex_search(result, match, pattern) || match.empty())
		return;

	m_api_key = match[1];
}

uint64_t session_data::get_steam_id() const {
	return m_steam_id;
}

std::string session_data::get_cookies() {
	if (m_session_id.empty()) {
		std::mt19937 random_engine(std::random_device{}());
		std::uniform_int_distribution random_byte_dist{0x10, 0xFF};
		for (uint8_t i = 0; i < 12; i++) {
			std::string byte;
			std::stringstream stream;
			stream << std::hex << random_byte_dist(random_engine);
			stream >> byte;
			m_session_id.append(byte);
		}
	}

	std::vector<std::string> cookie_options{};
	cookie_options.emplace_back(std::string("sessionid=").append(m_session_id));
	cookie_options.emplace_back(std::string("steamLoginSecure=").append(get_steam_login_secure()));
	cookie_options.emplace_back(std::string("mobileClient=").append("android"));
	cookie_options.emplace_back(std::string("mobileClientVersion=").append("777777 3.6.1"));

	std::string cookies;
	std::for_each(cookie_options.begin(), cookie_options.end(), [&](const auto& option) {
		cookies.append(option).append(";");
	});

	return cookies;
}

std::string session_data::get_steam_login_secure() {
	return std::to_string(m_steam_id).append("%7C%7C").append(m_access_token);
}

std::string session_data::get_session_id() {
	return m_session_id;
}

std::string session_data::get_api_key() {
	return m_api_key;
}
