#ifndef I_CONNECTION
#define I_CONNECTION

#include "net_structures.hpp"

#include <utility>
#include <vector>
#include <functional>

constexpr auto TCP_MAGIC = 0x31305456; // "VT01"

class i_connection {
public:
	using read_callback_t = void(const std::vector<uint8_t>& binary);
	using disconnect_callback_t = void(std::string_view);
	using connect_callback_t = void();

	void set_read_callback(std::function<read_callback_t> callback) { fn_on_read = std::move(callback); }
	void set_disconnect_callback(std::function<disconnect_callback_t> callback) { fn_on_disconnect = std::move(callback); }
	void set_connect_callback(std::function<connect_callback_t> callback) { fn_on_connect = std::move(callback); }

	virtual bool connect() { return false; };
	virtual void disconnect() {};

	virtual void send(const std::vector<uint8_t>& binary) {};

	virtual void serve() {};
protected:
	std::function<read_callback_t> fn_on_read;
	std::function<disconnect_callback_t> fn_on_disconnect;
	std::function<connect_callback_t> fn_on_connect;
};

#endif