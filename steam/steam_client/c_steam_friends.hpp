#include "c_steam_handler.hpp"

class c_steam_friends : public c_steam_handler {
public:
	explicit c_steam_friends(c_steam_client* client);

	std::string_view get_profile_name() { return profile_name; }
private:
	void handle_friends_list(const std::vector<uint8_t>& buffer);
	void handle_account_info(const std::vector<uint8_t>& buffer);

	std::string profile_name{};
	std::vector<uint64_t> m_friends{};
};