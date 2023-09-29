#include <iostream>
#include "c_credential_auth_session.hpp"
#include "../../structs/steammessages_auth.steamclient.pb.h"
#include "../../networking/steam_language.hpp"

class c_steam_client;

class c_steam_authentication {
public:
	struct auth_session_details {
		std::string username;
		std::string password;

		std::string guard_data;

		std::string device_name = "ABC123";
		std::string website_id = "Client";

		EAuthTokenPlatformType platform_type;
		EOSType os_type;

		bool is_persistent_session;
	};

	explicit c_steam_authentication(c_steam_client* client);

	c_credential_auth_session* start_auth_session(const auth_session_details& details);
private:
	CAuthentication_GetPasswordRSAPublicKey_Response get_password_rsa_public_key(std::string_view account);

	c_steam_client* m_client;
};