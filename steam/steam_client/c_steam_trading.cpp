#include "c_steam_trading.hpp"
#include "../../structs/steammessages_clientserver_2.pb.h"

c_steam_trading::c_steam_trading(c_steam_client* client) : c_steam_handler(client) {
	m_callbacks[EMsg::EconTrading_InitiateTradeResult] = [&](const auto& buffer) { handle_trade_result(buffer); };
}

void c_steam_trading::initiate_trade(uint64_t steam_id) {
	CMsgTrading_InitiateTradeRequest trade_request;
	trade_request.set_other_steamid(steam_id);

	send(EMsg::EconTrading_InitiateTradeRequest, trade_request);
}

void c_steam_trading::handle_trade_result(const std::vector<uint8_t>& buffer) {
	CMsgTrading_InitiateTradeResponse trade_response;
	trade_response.ParseFromArray(buffer.data(), (int)buffer.size());
}
