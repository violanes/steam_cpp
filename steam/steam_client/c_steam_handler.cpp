#include "c_steam_handler.hpp"
#include "c_steam_client.hpp"

c_steam_handler::c_steam_handler(c_steam_client* client) {
	steam_client = client;
}

void c_steam_handler::send(EMsg type, const google::protobuf::Message& message) {
	steam_client->send(type, message);
}

bool c_steam_handler::has_handler(EMsg type) {
	return m_callbacks.contains(type);
}

void c_steam_handler::execute(EMsg type, const proto_response& message) {
	if (!has_handler(type))
		return;

	m_callbacks[type](message);
}