#include "../cmc_client.hpp"
#include "../web_api/c_web_api.hpp"

#include "c_steam_user.hpp"
#include "c_steam_friends.hpp"
#include "c_steam_trading.hpp"
#include "c_steam_unified_messages.hpp"

class c_steam_client : public cmc_client {
public:
	explicit c_steam_client();
	bool connect();

	void set_steam_id(uint64_t steam_id) { m_steam_id = steam_id; }
	void set_session_id(uint64_t session_id) { m_session_id = session_id; }
	uint64_t get_steam_id() { return m_steam_id; }

	void send(EMsg type, const google::protobuf::Message& message) override;
	void send(const std::vector<uint8_t>& buffer) override;

	void set_next_job_name(std::string_view job_name) { m_next_job_name = job_name; }
	void set_next_job_id(uint64_t job_id) { m_next_job_id = job_id; }

	void add_callback(EMsg callback_type);

	c_steam_user* get_user() { return (c_steam_user*)m_handlers["steam_user"].get(); }
	c_steam_friends* get_friends() { return (c_steam_friends*)m_handlers["steam_friends"].get(); }
	c_steam_trading* get_trading() { return (c_steam_trading*)m_handlers["steam_trading"].get(); }
	c_steam_unified_messages* get_unified_messages() { return (c_steam_unified_messages*)m_handlers["steam_unified_messages"].get(); }

	c_steam_authentication* get_authentication() { return m_steam_auth.get(); }
private:
	std::vector<EMsg> m_callbacks = {};

	std::unique_ptr<c_steam_authentication> m_steam_auth;
};