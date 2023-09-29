#include "c_tcp_connection.hpp"

c_tcp_connection::c_tcp_connection(std::string_view ip, uint16_t port) : i_connection() {
	m_endpoint = std::make_unique<boost::asio::ip::tcp::endpoint>(boost::asio::ip::address::from_string(ip.data()), port);
	m_socket = std::make_unique<boost::asio::ip::tcp::socket>(m_io_service);
}

c_tcp_connection::~c_tcp_connection() {
	if (m_listener.joinable())
		m_listener.detach();
}

bool c_tcp_connection::connect() {
	try {
		m_socket->connect(*m_endpoint);
		m_listening = true;
		m_listener = std::thread([&]() -> void { listen(); });
	} catch (const std::exception& e) {
		std::cout << "[TCP] exception while connecting: " << e.what() << std::endl;
		return false;
	}

	return true;
}

void c_tcp_connection::disconnect() {
	m_listening = false;

	// TODO: disconnect from the server!

	m_listener.detach();

	if (m_socket->is_open())
		m_socket->close();
}

void c_tcp_connection::send(const std::vector<uint8_t>& binary) {
	std::vector<uint8_t> buffer{};
	buffer.resize(sizeof(c_tcp_packet));

	auto packet = reinterpret_cast<c_tcp_packet*>(buffer.data());
	packet->magic = TCP_MAGIC;
	packet->length = binary.size();

	buffer.insert(buffer.end(), binary.begin(), binary.end());

	boost::system::error_code error;
	m_socket->write_some(boost::asio::buffer(buffer), error);
}

void c_tcp_connection::serve() {
	m_listener.join();
}

void c_tcp_connection::listen() {
	while (m_listening) {
		std::vector<uint8_t> buffer{};
		buffer.resize(sizeof(c_tcp_packet));

		boost::system::error_code error;
		size_t len = m_socket->read_some(boost::asio::buffer(buffer), error);

		if (error == boost::asio::error::eof) {
			printf("connection closed\n"); // TODO: call onDisconnected
			break;
		} else if (error) {
			throw boost::system::system_error(error);
		}

		if (len != sizeof(c_tcp_packet))
			continue;

		const auto packet = reinterpret_cast<const c_tcp_packet*>(buffer.data());
		if (packet->magic != TCP_MAGIC)
			continue;

		std::vector<uint8_t> packet_binary{};
		packet_binary.resize(packet->length);

		len = m_socket->read_some(boost::asio::buffer(packet_binary), error);
		if (len != packet->length)
			continue;

		if (fn_on_read)
			fn_on_read(packet_binary);
	}
}
