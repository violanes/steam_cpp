#include "c_web_api.hpp"

#include <curl/curl.h>
#include <string>
#include <algorithm>

static size_t write_callback(void* contents, size_t size, size_t num_blocks, void* result)
{
	((std::string*)result)->append((char*)contents, size * num_blocks);
	return size * num_blocks;
}

std::string c_web_api::call_endpoint(c_web_api::e_request_type type, std::string_view iface, std::string_view function,
									 const std::unordered_map<std::string, std::string>& args, uint16_t version) {
	auto handle = curl_easy_init();
	if (!handle)
		return {};

	static const std::string api_endpoint = "https://api.steampowered.com";

	auto url = api_endpoint + std::string("/").append(iface).append("/").append(function).append("/v")
		.append(std::to_string(version)).append("/?");
	std::for_each(args.begin(), args.end(), [&url](const auto& argument) {
		url.append("&").append(argument.first).append("=").append(argument.second);
	});

	std::string buffer;

	curl_easy_setopt(handle, CURLOPT_SSL_VERIFYPEER, 0L); // NOTE!!! should be avoided
	curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
	curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_callback);
	curl_easy_setopt(handle, CURLOPT_WRITEDATA, &buffer);

	if (type == e_request_type::k_http_post)
		curl_easy_setopt(handle, CURLOPT_POST, 1);
	else
		curl_easy_setopt(handle, CURLOPT_HTTPGET, 1);

	auto http_code = curl_easy_perform(handle);
	curl_easy_cleanup(handle);

	if (http_code != CURLcode::CURLE_OK)
		return {};

	return buffer;
}