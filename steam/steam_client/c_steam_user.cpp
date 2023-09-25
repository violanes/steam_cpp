#include "c_steam_client.hpp"

c_steam_user::c_steam_user(c_steam_client* client) : c_steam_handler(client) {}

void c_steam_user::logon(const c_steam_user::c_logon_details& details) {
	CMsgClientLogon logon;
	logon.set_account_name(details.username);
	logon.set_password(details.password);
	logon.set_protocol_version(65580);

	send(EMsg::ClientLogon, logon);
}

void c_steam_user::set_logon_callback(const std::function<logon_callback_t>& callback) {
	m_on_logon = callback;
	steam_client->add_callback(EMsg::ClientLogOnResponse);
}
