#include "c_steam_friends.hpp"
#include "../../structs/steammessages_clientserver_login.pb.h"
#include "../../structs/steammessages_clientserver_friends.pb.h"

c_steam_friends::c_steam_friends(c_steam_client* client) : c_steam_handler(client) {
	m_callbacks[ClientFriendsList] = [&](const auto& buffer) { handle_friends_list(buffer); };
	m_callbacks[ClientAccountInfo] = [&](const auto& buffer) { handle_account_info(buffer); };
	m_callbacks[ClientChatMsg] = [&](const auto& buffer) { handle_chat_message(buffer); };
	m_callbacks[ClientFriendMsgIncoming] = [&](const auto& buffer) { handle_friend_message(buffer); };
}

void c_steam_friends::set_persona_state(EPersonaState state) {
	CMsgClientChangeStatus state_message;
	state_message.set_persona_state(static_cast<uint32_t>(state));
	send(EMsg::ClientChangeStatus, state_message);
}

void c_steam_friends::send_message(uint64_t steam_id, EChatEntryType type, std::string_view message) {
	CMsgClientFriendMsg friend_msg;
	friend_msg.set_steamid(steam_id);
	friend_msg.set_chat_entry_type(static_cast<int>(type));
	friend_msg.set_message(message.data());
	send(EMsg::ClientFriendMsg, friend_msg);
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

void c_steam_friends::handle_chat_message(const std::vector<uint8_t>& buffer) {
	// TODO: handle chat messages
}

void c_steam_friends::handle_friend_message(const std::vector<uint8_t>& buffer) {
	CMsgClientFriendMsgIncoming incoming_msg;
	incoming_msg.ParseFromArray(buffer.data(), (int)buffer.size());

	if (fn_friend_message)
		fn_friend_message(incoming_msg.steamid_from(), incoming_msg.message(), (EChatEntryType)incoming_msg.chat_entry_type());
}
