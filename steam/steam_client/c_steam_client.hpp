#include "../cmc_client.hpp"
#include "../web_api/c_web_api.hpp"

#include "c_steam_user.hpp"
#include "c_steam_friends.hpp"
#include "c_steam_trading.hpp"

class c_steam_client : public cmc_client {
public:
	explicit c_steam_client();
	bool connect();

	void set_steam_id(uint64_t steam_id);
	void send(EMsg type, const google::protobuf::Message& message) override;

	void add_callback(EMsg callback_type);

	c_steam_user* get_user() { return (c_steam_user*)m_handlers["steam_user"].get(); }
	c_steam_friends* get_friends() { return (c_steam_friends*)m_handlers["steam_friends"].get(); }
	c_steam_trading* get_trading() { return (c_steam_trading*)m_handlers["steam_trading"].get(); }
private:
	std::vector<EMsg> m_callbacks = {};
	std::unique_ptr<c_web_api> m_web_api;
};