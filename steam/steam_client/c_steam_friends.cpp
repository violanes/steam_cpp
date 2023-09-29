#include "c_steam_friends.hpp"
#include "../../structs/steammessages_clientserver_friends.pb.h"
#include "../../structs/steammessages_clientserver_login.pb.h"

c_steam_friends::c_steam_friends(c_steam_client* client) : c_steam_handler(client) {
	m_callbacks[ClientFriendsList] = [&](const auto& message) { handle_friends_list(message); };
	m_callbacks[ClientAccountInfo] = [&](const auto& message) { handle_account_info(message); };
	m_callbacks[ClientChatMsg] = [&](const auto& message) { handle_chat_message(message); };
	m_callbacks[ClientFriendMsgIncoming] = [&](const auto& message) { handle_friend_message(message); };
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

void c_steam_friends::handle_friends_list(const proto_response& message) {
	CMsgClientFriendsList friends_list;
	friends_list.ParseFromArray(message.buffer.data(), (int)message.buffer.size());

	for (const auto& steam_friend : friends_list.friends()) {
		if (static_cast<bool>((steam_friend.ulfriendid() >> 32) & 0xF)) // check whether current friend is a player or a clan
			m_friends.emplace_back(steam_friend.ulfriendid());
	}
}

void c_steam_friends::handle_account_info(const proto_response& message) {
	CMsgClientAccountInfo account_info;
	account_info.ParseFromArray(message.buffer.data(), (int)message.buffer.size());

	profile_name = account_info.persona_name();
}

void c_steam_friends::handle_chat_message(const proto_response& message) {
	// TODO: handle chat messages
}

void c_steam_friends::handle_friend_message(const proto_response& message) {
	CMsgClientFriendMsgIncoming incoming_msg;
	incoming_msg.ParseFromArray(message.buffer.data(), (int)message.buffer.size());

	if (fn_friend_message)
		fn_friend_message(incoming_msg.steamid_from(), incoming_msg.message(), (EChatEntryType)incoming_msg.chat_entry_type());
}
