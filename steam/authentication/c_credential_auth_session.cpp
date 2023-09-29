#include "c_credential_auth_session.hpp"

c_credential_auth_session::c_credential_auth_session(c_steam_client* client, const CAuthentication_BeginAuthSessionViaCredentials_Response& response)
	: c_auth_session(client, response.client_id(), response.request_id(),
		std::vector<CAuthentication_AllowedConfirmation>(response.allowed_confirmations().begin(),
		response.allowed_confirmations().end()), response.interval()) {
	m_steam_id = response.steamid();
}