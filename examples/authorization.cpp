#include "../steam/steam_client/c_steam_client.hpp"

std::unique_ptr<c_steam_client> g_steam_client;

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "please provide username and password" << std::endl;
		return 1;
	}

	g_steam_client = std::make_unique<c_steam_client>();
	if (!g_steam_client->connect()) {
		std::cerr << "[steam] failed to connect to the server" << std::endl;
		return 1;
	}

	std::cout << "[steam] connection has been established" << std::endl;

	c_steam_authentication::auth_session_details session_details;
	session_details.username = argv[0];
	session_details.password = argv[1];
	session_details.platform_type = k_EAuthTokenPlatformType_SteamClient;
	session_details.os_type = EOSType::Android9;
	session_details.is_persistent_session = false;

	auto auth_session = g_steam_client->get_authentication()->start_auth_session(session_details);
	auth_session->disable_device_confirmation();

	auth_session->set_mobile_code_callback([&](bool previous_success) -> std::string {
		std::string code;
		std::cout << "Enter code from mobile authenticator: ";
		std::cin >> code;
		return code;
	});

	auth_session->set_email_code_callback([&](std::string_view email, bool previous_success) -> std::string {
		std::string code;
		std::cout << "Enter code from " << email << ": ";
		std::cin >> code;
		return code;
	});

	auto poll_result = auth_session->poll_result();

	g_steam_client->get_user()->set_logon_callback([&](const c_steam_user::c_logon_result& result) -> void {
		printf("logged in : %d\n", result.result);
	});

	c_steam_user::c_logon_details details;
	details.username = poll_result->account_name;
	details.access_token = poll_result->refresh_token;
	g_steam_client->get_user()->logon(details);

	while (true)
		std::this_thread::sleep_for(std::chrono::seconds(100));

	return 0;
}