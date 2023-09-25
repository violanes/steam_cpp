#include "c_encryption_with_hmac.hpp"

#include <cryptopp/hmac.h>
#include <cryptopp/sha.h>
#include <cryptopp/aes.h>
#include <cryptopp/filters.h>
#include <cryptopp/modes.h>
#include <random>

c_encryption_with_hmac::c_encryption_with_hmac(const std::vector<uint8_t>& session_key) {
	m_session_key = session_key;
	std::copy(m_session_key.begin(), m_session_key.begin() + 16, m_hmac_secret.begin());
}

void c_encryption_with_hmac::process_incoming(std::vector<uint8_t>* buffer) {
	std::array<uint8_t, 16> iv{};
	CryptoPP::ECB_Mode<CryptoPP::AES>::Decryption(m_session_key.data(), m_session_key.size()).ProcessData(
		iv.data(), buffer->data(), 16);

	CryptoPP::CBC_Mode<CryptoPP::AES>::Decryption decryption(m_session_key.data(), m_session_key.size(), iv.data());
	std::vector<uint8_t> decrypted = {};

	CryptoPP::ArraySource source(buffer->data() + 16, buffer->size() - 16, true,
						  new CryptoPP::StreamTransformationFilter(decryption, new CryptoPP::VectorSink(decrypted)));

	// TODO: validate HMAC hash

	buffer->clear();
	buffer->insert(buffer->end(), decrypted.begin(), decrypted.end());
}

void c_encryption_with_hmac::process_outgoing(std::vector<uint8_t>* buffer) {
	std::array<uint8_t, 16> iv{};
	std::array<uint8_t, 3> random{};

	std::random_device rd{};
	std::mt19937 random_engine{ rd() };

	std::uniform_int_distribution<uint32_t> byte_dist{0, 0xFF};
	std::for_each(random.begin(), random.end(), [&](auto& byte) {
		byte = byte_dist(random_engine) & 0xFF;
	});

	std::copy(random.begin(), random.end(), iv.begin() + iv.size() - random.size());

	std::vector<uint8_t> hash_bin = {};
	hash_bin.insert(hash_bin.end(), random.begin(), random.end());
	hash_bin.insert(hash_bin.end(), buffer->begin(), buffer->end());

	std::vector<uint8_t> hash = {};
	CryptoPP::HMAC<CryptoPP::SHA1> hmac(m_hmac_secret.data(), m_hmac_secret.size());
	CryptoPP::VectorSource vs(hash_bin, true, new CryptoPP::HashFilter(hmac, new CryptoPP::VectorSink(hash)));

	std::vector<uint8_t> encrypted_iv = {};
	encrypted_iv.resize(iv.size());

	CryptoPP::ECB_Mode<CryptoPP::AES>::Encryption(m_session_key.data(), m_session_key.size()).ProcessData(
		encrypted_iv.data(), iv.data(), iv.size());

	std::vector<uint8_t> encrypted_data = {};

	CryptoPP::CBC_Mode<CryptoPP::AES>::Encryption encryption(m_session_key.data(), m_session_key.size(), iv.data());
	CryptoPP::ArraySource encryptor_source(buffer->data(), buffer->size(), true,
		new CryptoPP::StreamTransformationFilter(encryption, new CryptoPP::VectorSink(encrypted_data)));

	std::vector<uint8_t> result = {};
	result.insert(result.end(), encrypted_iv.begin(), encrypted_iv.end());
	result.insert(result.end(), encrypted_data.begin(), encrypted_data.end());

	buffer->clear();
	buffer->insert(buffer->end(), result.begin(), result.end());
}