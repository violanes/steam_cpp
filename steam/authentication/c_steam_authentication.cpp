#include <cryptopp/rsa.h>
#include <cryptopp/base64.h>

#include "../steam_client/c_steam_client.hpp"

c_steam_authentication::c_steam_authentication(c_steam_client* client) {
	m_client = client;
}

c_credential_auth_session* c_steam_authentication::start_auth_session(const auth_session_details& details) {
	auto rsa_public_key = get_password_rsa_public_key(details.username);

	static auto decode_hex_string = [&](std::string_view hex_string) -> std::vector<uint8_t> {
		std::vector<uint8_t> decoded_hex{};
		for (size_t i = 0; i < hex_string.length(); i += 2) {
			std::stringstream stream;
			uint32_t byte;
			stream << std::hex << std::string(hex_string).substr(i, 2);
			stream >> byte;
			decoded_hex.emplace_back(byte & 0xFF);
		}

		return decoded_hex;
	};

	std::vector<uint8_t> rsa_modulus = decode_hex_string(rsa_public_key.publickey_mod());
	std::vector<uint8_t> rsa_exponent = decode_hex_string(rsa_public_key.publickey_exp());

	std::string cipher_password;
	std::string password;

	CryptoPP::AutoSeededRandomPool rng;

	CryptoPP::RSA::PublicKey public_key;
	public_key.Initialize(CryptoPP::Integer(rsa_modulus.data(), rsa_modulus.size()),
		CryptoPP::Integer(rsa_exponent.data(), rsa_exponent.size()));

	CryptoPP::RSAES_PKCS1v15_Encryptor encryptor(public_key);
	CryptoPP::StringSource ss(details.password, true, new CryptoPP::PK_EncryptorFilter(
		rng, encryptor, new CryptoPP::StringSink(cipher_password)));

	CryptoPP::StringSource base64ss(cipher_password, true, new CryptoPP::Base64Encoder(
		new CryptoPP::StringSink(password), false));

	auto device_details = new CAuthentication_DeviceDetails();
	device_details->set_device_friendly_name(details.device_name);
	device_details->set_platform_type(details.platform_type);
	device_details->set_os_type((int)details.os_type);

	auto session_persistence = details.is_persistent_session ? ESessionPersistence::k_ESessionPersistence_Persistent
		: ESessionPersistence::k_ESessionPersistence_Ephemeral;

	CAuthentication_BeginAuthSessionViaCredentials_Request request;
	request.set_account_name(details.username);
	request.set_encrypted_password(password);
	request.set_encryption_timestamp(rsa_public_key.timestamp());
	request.set_website_id(details.website_id);
	request.set_guard_data(details.guard_data);
	request.set_persistence(session_persistence);
	request.set_allocated_device_details(device_details);

	auto response = m_client->get_unified_messages()->send_message("Authentication.BeginAuthSessionViaCredentials#1", request);
	if (static_cast<EResult>(response.header.eresult()) != EResult::OK)
		throw std::runtime_error(std::string("authentication failure : ").append(std::to_string(response.header.eresult())));

	CAuthentication_BeginAuthSessionViaCredentials_Response session_response;
	session_response.ParseFromArray(response.buffer.data(), (int)response.buffer.size());

	return new c_credential_auth_session(m_client, session_response);
}

CAuthentication_GetPasswordRSAPublicKey_Response c_steam_authentication::get_password_rsa_public_key(std::string_view account) {
	CAuthentication_GetPasswordRSAPublicKey_Request request;
	request.set_account_name(account.data());

	auto rsa_response = m_client->get_unified_messages()->send_message("Authentication.GetPasswordRSAPublicKey#1", request);
	CAuthentication_GetPasswordRSAPublicKey_Response response;
	response.ParseFromArray(rsa_response.buffer.data(), (int)rsa_response.buffer.size());

	return response;
}
