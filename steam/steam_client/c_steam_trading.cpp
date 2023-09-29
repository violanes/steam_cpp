#include "c_steam_trading.hpp"
#include "../../structs/steammessages_clientserver_2.pb.h"

c_steam_trading::c_steam_trading(c_steam_client* client) : c_steam_handler(client) {
	m_callbacks[EMsg::EconTrading_InitiateTradeResult] = [&](const auto& message) { handle_trade_result(message); };
}

void c_steam_trading::initiate_trade(uint64_t steam_id) {
	CMsgTrading_InitiateTradeRequest trade_request;
	trade_request.set_other_steamid(steam_id);

	send(EMsg::EconTrading_InitiateTradeRequest, trade_request);
}

void c_steam_trading::handle_trade_result(const proto_response& message) {
	CMsgTrading_InitiateTradeResponse trade_response;
	trade_response.ParseFromArray(message.buffer.data(), (int)message.buffer.size());
}
