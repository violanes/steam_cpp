#include "../../structs/steammessages_auth.steamclient.pb.h"

struct auth_poll_result {
	std::string access_token;
	std::string refresh_token;
	std::string account_name;
	std::string new_guard_data;
};

class c_steam_client;

class c_auth_session {
public:
	c_auth_session(c_steam_client* steam_client, uint64_t client_id, std::string_view request_id,
				   const std::vector<CAuthentication_AllowedConfirmation>& allowed_confirmations, float poll_interval);

	std::unique_ptr<auth_poll_result> poll_result();
	void disable_device_confirmation() { m_use_device_confirmation = false; }

	void set_mobile_code_callback(const std::function<std::string(bool)>& fn) { fn_mobile_code = fn; }
	void set_email_code_callback(const std::function<std::string(std::string_view, bool)>& fn) { fn_email_code = fn; }
protected:
	uint64_t m_client_id = 0;
	uint64_t m_steam_id = 0;
private:
	void sort_confirmations();
	std::unique_ptr<auth_poll_result> poll_auth_session_status();

	std::function<std::string(bool)> fn_mobile_code;
	std::function<std::string(std::string_view, bool)> fn_email_code;

	bool m_use_device_confirmation = true;

	std::string m_request_id;
	uint32_t m_poll_interval;

	std::vector<CAuthentication_AllowedConfirmation> m_allowed_confirmations{};

	c_steam_client* m_client;
};