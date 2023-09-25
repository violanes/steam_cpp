#ifndef C_TCP_CONNECTION
#define C_TCP_CONNECTION

#include "i_connection.hpp"

#include <boost/asio.hpp>
#include <thread>

class c_tcp_connection : public i_connection {
public:
	c_tcp_connection(std::string_view ip, uint16_t port);
	~c_tcp_connection();

	bool connect() override;
	void disconnect() override;

	void send(const std::vector<uint8_t>& binary) override;

	void serve() override;
private:
	void listen();

	std::unique_ptr<boost::asio::ip::tcp::socket> m_socket;
	std::unique_ptr<boost::asio::ip::tcp::endpoint> m_endpoint;

	boost::asio::io_service m_io_service;

	bool m_listening = false;
	std::thread m_listener{};
};

#endif