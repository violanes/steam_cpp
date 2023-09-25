#include <iostream>
#include <vector>
class c_steam_directory {
public:
	struct steam_server {
		enum class e_server_type {
			k_tcp,
			k_udp,
			k_websocket
		} m_type;
		std::string address;
		uint16_t port;
	};

	std::vector<steam_server> load_servers();
private:
	std::vector<steam_server> m_servers{};
};