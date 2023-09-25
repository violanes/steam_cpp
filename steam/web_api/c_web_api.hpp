#include <iostream>
#include <unordered_map>

class c_web_api {
public:
	enum class e_request_type {
		k_http_get,
		k_http_post
	};

	static std::string call_endpoint(e_request_type type, std::string_view iface, std::string_view function,
							  const std::unordered_map<std::string, std::string>& args = {}, uint16_t version = 1);
};