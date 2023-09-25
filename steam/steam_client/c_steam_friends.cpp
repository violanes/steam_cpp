#include "c_steam_friends.hpp"
#include "../../structs/steammessages_clientserver_login.pb.h"
#include "../../structs/steammessages_clientserver_friends.pb.h"

c_steam_friends::c_steam_friends(c_steam_client* client) : c_steam_handler(client) {
	m_callbacks[ClientFriendsList] = [&](const auto& buffer) { handle_friends_list(buffer); };
	m_callbacks[ClientAccountInfo] = [&](const auto& buffer) { handle_account_info(buffer); };
}

void c_steam_friends::handle_friends_list(const std::vector<uint8_t>& buffer) {
	CMsgClientFriendsList friends_list;
	friends_list.ParseFromArray(buffer.data(), (int)buffer.size());

	for (const auto& steam_friend : friends_list.friends()) {
		if (static_cast<bool>((steam_friend.ulfriendid() >> 32) & 0xF)) // check whether current friend is a player or a clan
			m_friends.emplace_back(steam_friend.ulfriendid());
	}
}

void c_steam_friends::handle_account_info(const std::vector<uint8_t>& buffer) {
	CMsgClientAccountInfo account_info;
	account_info.ParseFromArray(buffer.data(), (int)buffer.size());

	profile_name = account_info.persona_name();
}
