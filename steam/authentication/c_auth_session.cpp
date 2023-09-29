#include "../steam_client/c_steam_client.hpp"

c_auth_session::c_auth_session(c_steam_client* steam_client, uint64_t client_id, std::string_view request_id,
							   const std::vector<CAuthentication_AllowedConfirmation>& allowed_confirmations, float poll_interval) {
	m_client_id = client_id;
	m_request_id = request_id;
	m_poll_interval = static_cast<uint32_t>(poll_interval * 1000); // convert seconds to milliseconds

	m_allowed_confirmations = allowed_confirmations;
	sort_confirmations();

	m_client = steam_client;
}

std::unique_ptr<auth_poll_result> c_auth_session::poll_result() {
	if (m_allowed_confirmations.empty())
		throw std::runtime_error("[auth_session] no confirmations available");

	if (m_allowed_confirmations.front().confirmation_type() == EAuthSessionGuardType::k_EAuthSessionGuardType_DeviceConfirmation
		&& !m_use_device_confirmation) {
		if (m_allowed_confirmations.size() >= 2)
			m_allowed_confirmations.erase(m_allowed_confirmations.begin());
		else
			throw std::runtime_error("[auth_session] no allowed confirmations except for device confirmation");
	}

	bool wait_for_poll = false;
	switch (m_allowed_confirmations.front().confirmation_type()) {
		case EAuthSessionGuardType::k_EAuthSessionGuardType_None:
			break;
		case EAuthSessionGuardType::k_EAuthSessionGuardType_DeviceCode:
		case EAuthSessionGuardType::k_EAuthSessionGuardType_EmailCode: {
			bool waiting_for_code = true;
			bool previous_succeeded = true;
			while (waiting_for_code) {
				auto code = (m_allowed_confirmations.front().confirmation_type() == k_EAuthSessionGuardType_DeviceCode)
					? fn_mobile_code(previous_succeeded)
					: fn_email_code(m_allowed_confirmations.front().associated_message(), previous_succeeded);

				CAuthentication_UpdateAuthSessionWithSteamGuardCode_Request request;
				request.set_client_id(m_client_id);
				request.set_steamid(m_steam_id);
				request.set_code(code);
				request.set_code_type(m_allowed_confirmations.front().confirmation_type());

				auto response = m_client->get_unified_messages()->send_message(
					"Authentication.UpdateAuthSessionWithSteamGuardCode#1", request);

				auto last_result = static_cast<EResult>(response.header.eresult());
				if (last_result != EResult::OK && last_result != EResult::DuplicateRequest)
					previous_succeeded = false;
				else
					waiting_for_code = false;
			}
			break;
		}
		case EAuthSessionGuardType::k_EAuthSessionGuardType_DeviceConfirmation:
			wait_for_poll = true;
			break;
		default:
			throw std::runtime_error("[auth_session] unsupported confirmation type");
	}

	bool should_poll = true;
	while (should_poll) {
		auto poll_response = poll_auth_session_status();
		if (poll_response)
			return poll_response;

		if (!wait_for_poll) {
			if (!poll_response)
				throw std::runtime_error("[auth_session] authentication failed");

			should_poll = false;
		} else
			std::this_thread::sleep_for(std::chrono::milliseconds(m_poll_interval));
	}

	return nullptr;
}

void c_auth_session::sort_confirmations() {
	static std::vector<EAuthSessionGuardType> preferred_types = {
		EAuthSessionGuardType::k_EAuthSessionGuardType_None,
		EAuthSessionGuardType::k_EAuthSessionGuardType_DeviceConfirmation,
		EAuthSessionGuardType::k_EAuthSessionGuardType_DeviceCode,
		EAuthSessionGuardType::k_EAuthSessionGuardType_EmailCode,
		EAuthSessionGuardType::k_EAuthSessionGuardType_EmailConfirmation,
		EAuthSessionGuardType::k_EAuthSessionGuardType_MachineToken,
		EAuthSessionGuardType::k_EAuthSessionGuardType_Unknown,
	};

	std::sort(m_allowed_confirmations.begin(), m_allowed_confirmations.end(), [&](const auto& first,
		const auto& second) -> bool {
		return std::find(preferred_types.begin(), preferred_types.end(), first.confirmation_type())
				< std::find(preferred_types.begin(), preferred_types.end(), second.confirmation_type());
	});
}

std::unique_ptr<auth_poll_result> c_auth_session::poll_auth_session_status() {
	CAuthentication_PollAuthSessionStatus_Request request;
	request.set_client_id(m_client_id);
	request.set_request_id(m_request_id);

	auto response = m_client->get_unified_messages()->send_message("Authentication.PollAuthSessionStatus#1", request);
	if (static_cast<EResult>(response.header.eresult()) != EResult::OK)
		throw std::runtime_error("[auth_session] failed to poll auth session status");

	CAuthentication_PollAuthSessionStatus_Response session_status_response;
	session_status_response.ParseFromArray(response.buffer.data(), (int)response.buffer.size());

	if (session_status_response.new_client_id())
		m_client_id = session_status_response.new_client_id();

	if (session_status_response.refresh_token().empty())
		return nullptr;

	auto result = std::make_unique<auth_poll_result>();
	result->refresh_token = session_status_response.refresh_token();
	result->access_token = session_status_response.access_token();
	result->account_name = session_status_response.account_name();
	result->new_guard_data = session_status_response.new_guard_data();

	return result;
}
