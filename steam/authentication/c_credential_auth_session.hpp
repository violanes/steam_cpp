#include "c_auth_session.hpp"

class c_credential_auth_session : public c_auth_session {
public:
	explicit c_credential_auth_session(c_steam_client* client, const CAuthentication_BeginAuthSessionViaCredentials_Response& response);
};