#include "c_steam_client.hpp"

c_steam_unified_messages::c_steam_unified_messages(c_steam_client* client) : c_steam_handler(client) {
	m_callbacks[ServiceMethodResponse] = [&](const auto& message) { on_service_message(message); };
}

proto_response c_steam_unified_messages::send_message(std::string_view name, const google::protobuf::Message& message) {
	steam_client->set_next_job_name(name);
	steam_client->set_next_job_id(__rdtsc());
	steam_client->send(steam_client->get_steam_id() ? ServiceMethodCallFromClient : ServiceMethodCallFromClientNonAuthed, message);

	service_message.buffer.clear();
	service_message.header.set_eresult(0);

	std::unique_lock<std::mutex> lock(m_job_mutex);
	m_cv.wait(lock, [this] { return service_message.header.eresult() > 0 || !service_message.buffer.empty(); });

	return service_message;
}

void c_steam_unified_messages::on_service_message(const proto_response& message) {
	std::unique_lock<std::mutex> lock(m_job_mutex);
	service_message = message;
	m_cv.notify_one();
}