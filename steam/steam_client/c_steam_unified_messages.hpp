#include "c_steam_handler.hpp"

class c_steam_unified_messages : public c_steam_handler {
public:
	explicit c_steam_unified_messages(c_steam_client* client);

	proto_response send_message(std::string_view name, const google::protobuf::Message& message);
private:
	void on_service_message(const proto_response& buffer);

	std::mutex m_job_mutex;
	std::condition_variable m_cv;

	proto_response service_message;
};