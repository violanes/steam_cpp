#include "c_steam_handler.hpp"

class c_steam_trading : public c_steam_handler {
public:
	explicit c_steam_trading(c_steam_client* client);

	void initiate_trade(uint64_t steam_id);
private:
	void handle_trade_result(const proto_response& buffer);
};
