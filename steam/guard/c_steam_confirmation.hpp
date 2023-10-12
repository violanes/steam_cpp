#include "../../helpers/json.hpp"

class c_steam_guard_account;

class c_steam_confirmation {
public:
	c_steam_confirmation(const nlohmann::json& data, c_steam_guard_account* account);

	bool accept();
	bool decline();

	std::string get_creator_id() { return m_creator_id; }
private:
	bool send_confirmation(std::string_view command);

	c_steam_guard_account* m_account;

	std::string m_id;
	std::string m_creator_id;
	std::string m_nonce;
};