#include "steam/steam_client/c_steam_client.hpp"
#include <thread>

c_steam_client steam_client{};

void on_friend_message(uint64_t steam_id, std::string_view message, EChatEntryType type) {
	if (type != EChatEntryType::ChatMsg) // only check for incoming messages, ignore invites, statuses etc
		return;

	std::cout << "[friend message] " << steam_id << " > " << message << std::endl;
	steam_client.get_friends()->send_message(steam_id, EChatEntryType::ChatMsg, "hello world!"); // respond with "hello world"
}

void on_logon(const c_steam_user::c_logon_result& result) {
	if (result.success) {
		std::cout << "Successfully logged in!" << std::endl;
		steam_client.get_friends()->set_persona_state(Online);
	} else {
		if (result.result == EResult::AccountLogonDenied)
			std::cout << "Steam account is protected with SteamGuard" << std::endl;
		else
			std::cout << "Failed to log in: " << (int)result.result << " / " << result.extended_result << std::endl;
	}
}

int main() {
	std::cout << "Initializing connection..." << std::endl;

	steam_client.connect();

	std::cout << "Connected to the Steam" << std::endl;

	//steam_client.set_steam_id(0);

	auto logon_details = c_steam_user::c_logon_details();
	logon_details.username = "username";
	logon_details.password = "password";

	steam_client.get_user()->set_logon_callback(on_logon);

	steam_client.get_friends()->set_friend_message_callback(on_friend_message);

	steam_client.get_user()->logon(logon_details);

	while (true) // simple thread lock...
		std::this_thread::sleep_for(std::chrono::milliseconds(10000));

	return 0;
}