#ifndef C_STEAM_HANDLER
#define C_STEAM_HANDLER

#include <iostream>
#include "../../structs/steammessages_base.pb.h"
#include "../../networking/steam_language.hpp"

struct proto_response {
	CMsgProtoBufHeader header;
	std::vector<uint8_t> buffer{};
};

class c_steam_client;

class c_steam_handler {
public:
	explicit c_steam_handler(c_steam_client* client);

	bool has_handler(EMsg type);
	void execute(EMsg type, const proto_response& message);
protected:
	void send(EMsg type, const google::protobuf::Message& message);

	c_steam_client* steam_client;
	std::unordered_map<EMsg, std::function<void(const proto_response&)>> m_callbacks = {};
};

#endif