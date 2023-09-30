#include "c_steam_client.hpp"
#include "../../helpers/bit_vector64.hpp"

c_steam_user::c_steam_user(c_steam_client* client) : c_steam_handler(client) {}

void c_steam_user::logon(const c_steam_user::c_logon_details& details) {
	c_bit_vector64 steam_id(0);
	steam_id.apply(0, 0xFFFFFFFF, details.account_id);
	steam_id.apply(32, 0xFFFFF, details.account_instance);
	steam_id.apply(52, 0xF, static_cast<uint32_t>(EAccountType::Individual));
	steam_id.apply(56, 0xFF, static_cast<uint32_t>(EUniverse::Public)); // TODO: add multiple universes support

	steam_client->set_next_job_id(0);
	steam_client->set_session_id(0);
	steam_client->set_steam_id(steam_id.data);

	CMsgClientLogon logon;
	// TODO: set local IP

	logon.set_account_name(details.username);
	logon.set_protocol_version(65580);

	if (!details.access_token.empty())
		logon.set_access_token(details.access_token);
	else
		logon.set_password(details.password);

	logon.set_should_remember_password(details.should_remember);

	logon.set_client_package_version(1771);
	logon.set_supports_rate_limit_response(true);
	logon.set_machine_name(details.machine_name);
	//logon.set_machine_id();

	logon.set_auth_code(details.auth_code);
	logon.set_two_factor_code(details.two_factor_code);

	logon.set_login_key(details.login_key);

	logon.set_sha_sentryfile(details.sentry_file_hash);
	logon.set_eresult_sentryfile(static_cast<int>(details.sentry_file_hash.empty() ? EResult::FileNotFound : EResult::OK));

	send(EMsg::ClientLogon, logon);
}

void c_steam_user::set_logon_callback(const std::function<logon_callback_t>& callback) {
	m_on_logon = callback;
	steam_client->add_callback(EMsg::ClientLogOnResponse);
}
