#include "c_steam_handler.hpp"

class c_steam_friends : public c_steam_handler {
public:
	explicit c_steam_friends(c_steam_client* client);

	using message_callback_t = void(uint64_t steam_id, std::string_view message, EChatEntryType type);

	void set_persona_state(EPersonaState state);

	void send_message(uint64_t steam_id, EChatEntryType type, std::string_view message);

	void set_chat_message_callback(const std::function<message_callback_t>& fn) { fn_chat_message = fn; }
	void set_friend_message_callback(const std::function<message_callback_t>& fn) { fn_friend_message = fn; }

	std::string_view get_profile_name() { return profile_name; }
	std::vector<uint64_t> get_friends_list() { return m_friends; }
private:
	void handle_friends_list(const std::vector<uint8_t>& buffer);
	void handle_account_info(const std::vector<uint8_t>& buffer);
	void handle_chat_message(const std::vector<uint8_t>& buffer);
	void handle_friend_message(const std::vector<uint8_t>& buffer);

	std::string profile_name{};
	std::vector<uint64_t> m_friends{};

	std::function<message_callback_t> fn_chat_message;
	std::function<message_callback_t> fn_friend_message;
};