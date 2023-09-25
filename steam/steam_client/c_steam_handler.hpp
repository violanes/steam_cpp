#ifndef C_STEAM_HANDLER
#define C_STEAM_HANDLER

#include <iostream>
#include "../../structs/steammessages_base.pb.h"
#include "../../steam_language.hpp"

class c_steam_client;

class c_steam_handler {
public:
	explicit c_steam_handler(c_steam_client* client);

	bool has_handler(EMsg type);
	void execute(EMsg type, const std::vector<uint8_t>& message);
protected:
	void send(EMsg type, const google::protobuf::Message& message);

	c_steam_client* steam_client;
	std::unordered_map<EMsg, std::function<void(const std::vector<uint8_t>&)>> m_callbacks = {};
};

#endif