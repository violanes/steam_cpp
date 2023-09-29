#include "c_steam_handler.hpp"

class c_steam_user : public c_steam_handler {
public:
	struct c_logon_details {
		std::string username;
		std::string password;
		std::string access_token;
	};

	struct c_logon_result {
		bool success;
		EResult result;
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