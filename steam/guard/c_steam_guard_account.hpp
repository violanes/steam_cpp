#include "c_trade_manager.hpp"
#include "c_steam_confirmation.hpp"

class c_steam_guard_account {
public:
	explicit c_steam_guard_account(const nlohmann::json& data);

	std::vector<c_steam_confirmation> fetch_confirmations();

	std::string get_confirmation_query(std::string_view tag);

	std::unique_ptr<c_trade_manager> create_offer(std::string_view trade_link, uint64_t steam_id);
	session_data* get_session() { return m_session_data.get(); }

	std::string get_steam_guard_code(uint64_t time);
private:
	std::string generate_time_hash(uint64_t time, std::string_view tag);

	std::unique_ptr<session_data> m_session_data;

	std::string m_device_id;
	std::string m_identity_secret;
	std::string m_shared_secret;
};