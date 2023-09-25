#include "steam/steam_client/c_steam_client.hpp"
#include <thread>

void on_logon(const c_steam_user::c_logon_result& result) {
	if (result.success) {
		std::cout << "Successfully logged in!" << std::endl;
	} else {
		if (result.result == EResult::AccountLogonDenied)
			std::cout << "Steam account is protected with SteamGuard" << std::endl;
		else
			std::cout << "Failed to log in: " << (int)result.result << " / " << result.extended_result << std::endl;
	}
}

int main() {
	std::cout << "Initializing connection..." << std::endl;

	c_steam_client steam_client;
	steam_client.connect();

	std::cout << "Connected to the Steam" << std::endl;

	//steam_client.set_steam_id(0);

	auto logon_details = c_steam_user::c_logon_details();
	logon_details.username = "username";
	logon_details.password = "password";

	steam_client.get_user()->set_logon_callback(on_logon);
	steam_client.get_user()->logon(logon_details);

	while (true) // simple thread lock...
		std::this_thread::sleep_for(std::chrono::milliseconds(10000));

	return 0;
}