#include <iostream>
#include <unordered_map>

class session_data {
public:
	session_data(uint64_t steam_id, std::string_view access_token, std::string_view refresh_token);

	void refresh_access_token();
	void refresh_api_key();

	[[nodiscard]] uint64_t get_steam_id() const;

	std::string get_cookies();
	std::string get_session_id();
	std::string get_api_key();
private:
	std::string get_steam_login_secure();

	uint64_t m_steam_id;
	std::string m_api_key;

	std::string m_session_id;
	std::string m_access_token;
	std::string m_refresh_token;
};