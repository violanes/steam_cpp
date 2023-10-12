#include "c_web_api.hpp"

#include <algorithm>
#include <curl/curl.h>

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

std::string c_web_api::post(std::string_view url, std::string_view cookies, const std::unordered_map<std::string, std::string>& args,
							const std::vector<std::string>& headers) {
	auto handle = curl_easy_init();
	if (!handle)
		return {};

	std::string buffer{};
	std::string post_fields{};

	for (const auto& arg : args) {
		if (arg.first.empty() || arg.second.empty())
			continue;

		post_fields.append(arg.first).append("=").append(curl_easy_escape(handle,
			arg.second.c_str(), (int)arg.second.length())).append("&");
	}
	post_fields.pop_back();

	struct curl_slist* header_list = nullptr;
	for (const auto& field : headers)
		header_list = curl_slist_append(header_list, field.c_str());

	curl_easy_setopt(handle, CURLOPT_HTTPHEADER, header_list);
	curl_easy_setopt(handle, CURLOPT_USERAGENT, "okhttp/3.12.12");
	curl_easy_setopt(handle, CURLOPT_URL, (char*)url.data());
	curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_callback);
	curl_easy_setopt(handle, CURLOPT_WRITEDATA, &buffer);
	curl_easy_setopt(handle, CURLOPT_COOKIEFILE, "");
	curl_easy_setopt(handle, CURLOPT_COOKIE, cookies.data());
	curl_easy_setopt(handle, CURLOPT_POST, 1);
	curl_easy_setopt(handle, CURLOPT_POSTFIELDS, post_fields.c_str());

	auto code = curl_easy_perform(handle);

	uint32_t http_code;
	curl_easy_getinfo(handle, CURLINFO_HTTP_CODE, &http_code);
	curl_easy_cleanup(handle);

	if (code != CURLcode::CURLE_OK)
		return {};

	return buffer;
}

std::string c_web_api::get(std::string_view url, std::string_view cookies) {
	auto handle = curl_easy_init();
	if (!handle)
		return {};

	std::string buffer{};

	curl_easy_setopt(handle, CURLOPT_USERAGENT, "okhttp/3.12.12");
	curl_easy_setopt(handle, CURLOPT_URL, (char*)url.data());
	curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_callback);
	curl_easy_setopt(handle, CURLOPT_WRITEDATA, &buffer);
	curl_easy_setopt(handle, CURLOPT_COOKIEFILE, "");
	curl_easy_setopt(handle, CURLOPT_HTTPGET, 1);
	curl_easy_setopt(handle, CURLOPT_COOKIE, cookies.data());
	curl_easy_setopt(handle, CURLOPT_FOLLOWLOCATION, 1);

	auto http_code = curl_easy_perform(handle);
	curl_easy_cleanup(handle);

	if (http_code != CURLcode::CURLE_OK)
		return {};

	return buffer;
}
