#include "../networking/c_encrypted_connection.hpp"
#include "../steam_language.hpp"

#include "steam_client/c_steam_handler.hpp"

#include <mutex>

class cmc_client {
public:
	cmc_client();

	virtual bool connect(std::string_view ip, uint16_t port);
protected:
	virtual void send(EMsg type, const google::protobuf::Message& message);

	uint64_t m_steam_id = 0;
	uint32_t m_session_id = 0;

	bool m_is_connected = false;

	std::unordered_map<std::string, std::shared_ptr<c_steam_handler>> m_handlers = {};

	std::function<void(const CMsgClientLogonResponse&)> m_on_logon;
	std::function<void(const CMsgClientLoggedOff&)> m_on_logoff;
private:
	void heartbeat();
	void on_read(const std::vector<uint8_t>& buffer);
	void handle_message(EMsg type, const std::vector<uint8_t>& message, uint64_t job_id = 0);

	std::unique_ptr<c_encrypted_connection> m_connection;

	std::thread m_heart_beat;
	std::mutex m_connection_mutex{};

	uint8_t m_heartbeat_delay = 0;
};