#include <chrono>
#include <cryptopp/filters.h>
#include <cryptopp/base64.h>
#include <cryptopp/hmac.h>
#include <cryptopp/sha.h>
#include <curl/curl.h>
#include <regex>

#include "c_steam_guard_account.hpp"
#include "../web_api/c_web_api.hpp"

#undef min

std::vector<uint8_t> g_steam_guard_code_translations = {50, 51, 52, 53, 54, 55, 56, 57, 66, 67, 68, 70, 71,
														72, 74, 75, 77, 78, 80, 81, 82, 84, 86, 87, 88, 89};

c_steam_guard_account::c_steam_guard_account(const nlohmann::json& data) {
	m_device_id = data["device_id"].get<std::string>();
	m_identity_secret = data["identity_secret"].get<std::string>();
	m_shared_secret = data["shared_secret"].get<std::string>();

	m_session_data = std::make_unique<session_data>(data["Session"]["SteamID"].get<uint64_t>(),
	    data["Session"]["AccessToken"].get<std::string>(), data["Session"]["RefreshToken"].get<std::string>());

	m_session_data->refresh_access_token();
	m_session_data->refresh_api_key();
}

std::vector<c_steam_confirmation> c_steam_guard_account::fetch_confirmations() {
	std::string url = "https://steamcommunity.com/mobileconf/getlist?" + get_confirmation_query("conf");
	auto result = c_web_api::get(url, m_session_data->get_cookies());

	nlohmann::json confirmations;
	try {
		std::stringstream(result) >> confirmations;
	} catch (...) {
		return {};
	}

	if (!confirmations["success"].get<bool>())
		return {};

	std::vector<c_steam_confirmation> conf_list{};
	for (const auto& confirmation : confirmations["conf"].get<std::vector<nlohmann::json::object_t>>())
		conf_list.emplace_back(confirmation, this);

	return conf_list;
}

std::string c_steam_guard_account::get_confirmation_query(std::string_view tag) {
	auto timestamp = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	std::string url{};
	std::unordered_map<std::string, std::string> params{};

	params.emplace("p", m_device_id);
	params.emplace("a", std::to_string(m_session_data->get_steam_id()));
	params.emplace("k", generate_time_hash(timestamp, tag));
	params.emplace("t", std::to_string(timestamp));
	params.emplace("m", "react");
	params.emplace("tag", tag);

	for (const auto& param : params)
		url.append(param.first).append("=").append(param.second).append("&");
	url.pop_back();

	return url;
}

std::unique_ptr<c_trade_manager> c_steam_guard_account::create_offer(std::string_view trade_link, uint64_t steam_id) {
	auto token = trade_link.substr(trade_link.find("&token=") + 7);
	auto partner = std::string(trade_link).substr(trade_link.find("?partner=") + 9,
		trade_link.find("&token=") - (trade_link.find("?partner=") + 9));

	return std::make_unique<c_trade_manager>(partner, token, steam_id, m_session_data.get());
}

std::string c_steam_guard_account::get_steam_guard_code(uint64_t time) {
	std::vector<uint8_t> shared_secret{};
	std::vector<uint8_t> time_array{};

	time_array.resize(8);

	CryptoPP::StringSource base64ss(m_shared_secret, true, new CryptoPP::Base64Decoder(
		new CryptoPP::VectorSink(shared_secret)));

	time /= 30;
	for (size_t i = time_array.size(); i > 0; i--) {
		time_array[i - 1] = (uint8_t)time;
		time >>= 8;
	}

	std::vector<uint8_t> hash = {};
	CryptoPP::HMAC<CryptoPP::SHA1> hmac(shared_secret.data(), shared_secret.size());
	CryptoPP::VectorSource vs(time_array, true, new CryptoPP::HashFilter(hmac, new CryptoPP::VectorSink(hash)));

	std::array<uint8_t, 5> steam_guard_code{};
	try {
		uint8_t b = (hash[19] & 0xF);
		uint32_t code_point = (hash[b] & 0x7F) << 24 | (hash[b + 1] & 0xFF) << 16 | (hash[b + 2] & 0xFF) << 8 | (hash[b + 3] & 0xFF);

		for (uint8_t& i : steam_guard_code) {
			i = g_steam_guard_code_translations[code_point % g_steam_guard_code_translations.size()];
			code_point /= g_steam_guard_code_translations.size();
		}
	} catch (...) {
		std::cerr << "failed to generate SteamGuard code" << std::endl;
	}

	return {steam_guard_code.begin(), steam_guard_code.end()};
}

std::string c_steam_guard_account::generate_time_hash(uint64_t time, std::string_view tag) {
	std::vector<uint8_t> identity_secret{};
	CryptoPP::StringSource base64ss(m_identity_secret, true, new CryptoPP::Base64Decoder(
		new CryptoPP::VectorSink(identity_secret)));

	size_t hash_bin_length = 8, n3 = 8;
	if (!tag.empty())
		hash_bin_length += std::min(tag.length(), static_cast<size_t>(32));

	std::vector<uint8_t> hash_bin{};
	hash_bin.resize(hash_bin_length);

	while (true) {
		size_t n4 = n3 - 1;
		if (n3 <= 0)
			break;

		hash_bin[n4] = (uint8_t)time;
		time >>= 8;
		n3 = n4;
	}

	if (!tag.empty())
		memcpy(hash_bin.data() + 8, tag.data(), hash_bin_length - 8);

	std::string hash;
	CryptoPP::HMAC<CryptoPP::SHA1> hmac(identity_secret.data(), identity_secret.size());
	CryptoPP::VectorSource vs(hash_bin, true, new CryptoPP::HashFilter(hmac, new CryptoPP::StringSink(hash)));

	std::string encrypted_hash;
	CryptoPP::StringSource ss(hash, true, new CryptoPP::Base64Encoder(
		new CryptoPP::StringSink(encrypted_hash), false));

	const auto encoded_value = curl_easy_escape(nullptr, encrypted_hash.c_str(), static_cast<int>(encrypted_hash.length()));
	std::string result(encoded_value);
	curl_free(encoded_value);
	return result;
}
