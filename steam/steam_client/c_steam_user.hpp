#include "c_steam_handler.hpp"

class c_steam_user : public c_steam_handler {
public:
	struct c_logon_details {
		std::string username{};
		std::string password{};
		std::string access_token{};
		std::string machine_name = "ABC123";

		std::string auth_code{};
		std::string two_factor_code{};
		std::string login_key{};

		std::string sentry_file_hash{};

		uint32_t login_id = 0;

		bool should_remember = false;
		bool request_steam2_ticket = false;

		EOSType os_type = EOSType::Android9;
		std::string client_language = "english";

		uint32_t account_id = 0;
		uint32_t account_instance = 1;
	};

	struct c_logon_result {
		bool success;
		EResult result;

		std::string web_nonce;
		int32_t extended_result;
	};

	using logon_callback_t = void(const c_logon_result&);
	using logoff_callback_t = void(const CMsgClientLoggedOff&);

	explicit c_steam_user(c_steam_client* client);

	void logon(const c_logon_details& details);
	void set_logon_callback(const std::function<logon_callback_t>& callback);

	void logon_processed(const c_logon_result& details) { m_on_logon(details); }
	void logoff_processed(const CMsgClientLoggedOff& details) { m_on_logoff(details); }
private:
	std::function<logon_callback_t> m_on_logon = {};
	std::function<logoff_callback_t> m_on_logoff = {};
};