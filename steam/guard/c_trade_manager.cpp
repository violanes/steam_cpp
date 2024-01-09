#include "c_trade_manager.hpp"
#include "../web_api/c_web_api.hpp"
#include "../../helpers/json.hpp"

#include <sstream>

c_trade_manager::c_trade_manager(std::string_view partner, std::string_view token, uint64_t steam_id, session_data* session) {
	m_partner = partner;
	m_token = token;
	m_session_data = session;
	m_steam_id = steam_id;
}

c_trade_manager::c_trade_manager(std::string_view trade_id, session_data* session) {
	m_trade_id = trade_id;
	m_session_data = session;
}

void c_trade_manager::send() {
	if (m_local_assets.empty() && m_partner_assets.empty())
		throw std::runtime_error("There were no items provided for trade");

	nlohmann::json offer_params;
	nlohmann::json offer_data;

	if (!m_token.empty())
		offer_params["trade_offer_access_token"] = m_token;

	auto map_item = [this](const std::pair<uint64_t, size_t>& item) -> nlohmann::json::object_t {
		nlohmann::json::object_t mappedItem;
		mappedItem["appid"] = m_game_id;
		mappedItem["contextid"] = m_context_id;
		mappedItem["amount"] = item.second;
		mappedItem["assetid"] = std::to_string(item.first);
		return mappedItem;
	};

	offer_data["newversion"] = true;
	offer_data["version"] = m_partner_assets.size() + m_local_assets.size() + 1;
	offer_data["me"]["currency"] = std::vector<std::string>{};
	offer_data["me"]["assets"] = std::vector<nlohmann::json::object_t>{};
	offer_data["me"]["ready"] = false;
	offer_data["them"]["currency"] = std::vector<std::string>{};
	offer_data["them"]["assets"] = std::vector<nlohmann::json::object_t>{};
	offer_data["them"]["ready"] = false;

	for (const auto& item : m_local_assets)
		offer_data["me"]["assets"].emplace_back(map_item(item));

	for (const auto& item : m_partner_assets)
		offer_data["them"]["assets"].emplace_back(map_item(item));

	std::string buffer;
	std::string post_fields{};

	std::unordered_map<std::string, std::string> form_data{};
	form_data.emplace("sessionid", m_session_data->get_session_id());
	form_data.emplace("serverid", "1");
	form_data.emplace("partner", std::to_string(m_steam_id));
	form_data.emplace("tradeoffermessage", m_description);
	form_data.emplace("json_tradeoffer", offer_data.dump());
	form_data.emplace("captcha", "");
	form_data.emplace("trade_offer_create_params", offer_params.dump());

	std::vector<std::string> headers{};
	headers.emplace_back(std::string("Referer: ").append("https://steamcommunity.com/tradeoffer/new/?partner=")
		.append(m_partner).append("&token=").append(m_token));

	auto result = c_web_api::post("https://steamcommunity.com/tradeoffer/new/send", m_session_data->get_cookies(),
		form_data, headers);
	if (result.length() < 5)
		throw std::runtime_error("Steam is down");

	nlohmann::json trade_offer;
	try {
		std::stringstream(result) >> trade_offer;
	} catch (...) {
		throw std::runtime_error("Steam is currently under maintenance");
	}

	if (trade_offer.contains("tradeofferid"))
		m_trade_id = trade_offer["tradeofferid"].get<std::string>();
	else
		throw std::runtime_error("Failed to send trade offer");

	m_local_offer = true;

	m_mobile_confirmation = (trade_offer.contains("needs_mobile_confirmation") && trade_offer["needs_mobile_confirmation"].get<bool>());
	m_email_confirmation = (trade_offer.contains("needs_email_confirmation") && trade_offer["needs_email_confirmation"].get<bool>());
}

void c_trade_manager::accept() {
	std::unordered_map<std::string, std::string> form_data{};
	form_data.emplace("sessionid", m_session_data->get_session_id());
	form_data.emplace("serverid", "1");
	form_data.emplace("tradeofferid", m_trade_id);
	form_data.emplace("partner", m_partner);
	form_data.emplace("captcha", "");

	std::vector<std::string> headers{};
	headers.emplace_back(std::string("Referer: ").append("https://steamcommunity.com/tradeoffer/")
		.append(m_trade_id).append("/"));

	auto endpoint = std::string("https://steamcommunity.com/tradeoffer/").append(m_trade_id).append("/accept");
	auto result = c_web_api::post(endpoint, m_session_data->get_cookies(), form_data, headers);
	if (result.length() < 5)
		throw std::runtime_error("Steam is down");

	nlohmann::json response;
	try {
		std::stringstream(result) >> response;
	} catch (...) {
		throw std::runtime_error("Steam is currently under maintenance");
	}
}

void c_trade_manager::cancel() {
	if (m_trade_id.empty())
		return;

	auto result = c_web_api::post(std::string("https://steamcommunity.com/tradeoffer/").append(m_trade_id).append("/")
		.append(m_local_offer ? "cancel" : "decline"), m_session_data->get_cookies(),
		{{ "sessionid", m_session_data->get_session_id() }},
		{{ std::string("Referer: https://steamcommunity.com/tradeoffer/").append(m_trade_id).append("/?partner=")
		.append(m_partner).append("&token=").append(m_token) }});
}

c_trade_info c_trade_manager::poll_result() {
	std::unordered_map<std::string, std::string> args{};
	args.emplace("tradeofferid", m_trade_id);
	args.emplace("key", m_session_data->get_api_key());

	nlohmann::json resp;
	auto result = c_web_api::call_endpoint(c_web_api::e_request_type::k_http_get, "IEconService", "GetTradeOffer", args);
	try {
		std::stringstream(result) >> resp;
	} catch (...) {
		throw std::runtime_error("Failed to get trade info");
	}

	if (!resp.contains("response") || !resp["response"].contains("offer"))
		throw std::runtime_error("Malformed JSON response");

	c_trade_info info{};
	info.result = resp["response"]["offer"]["eresult"].get<EResult>();
	info.partner = resp["response"]["offer"]["accountid_other"].get<uint32_t>();
	info.confirmation_method = resp["response"]["offer"]["confirmation_method"].get<uint8_t>();
	info.expiration = resp["response"]["offer"]["expiration_time"].get<uint64_t>();
	info.state = resp["response"]["offer"]["trade_offer_state"].get<ETradeOfferState>();

	if (m_partner.empty())
		m_partner = std::to_string(info.partner);

	//if (info.state == ETradeOfferState::Countered)
	//	m_local_offer = false;

	return info;
}