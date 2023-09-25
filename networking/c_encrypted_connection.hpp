#include <memory>
#include <cryptopp/osrng.h>

#include "i_connection.hpp"
#include "encryption/i_encryption.hpp"
#include "../structs/steammessages_clientserver_login.pb.h"

class c_encrypted_connection : public i_connection {
public:
	explicit c_encrypted_connection(const std::shared_ptr<i_connection>& connection);

	bool connect() override;
	void disconnect() override;

	void send(const std::vector<uint8_t>& binary) override;

	void serve() override;
private:
	void on_receive(const std::vector<uint8_t>& buffer);

	void handle_encrypt_request(std::vector<uint8_t>* data);
	void handle_encrypt_result(std::vector<uint8_t>* data);

	std::shared_ptr<i_connection> m_connection;
	std::shared_ptr<i_encryption> m_encryption;

	CryptoPP::AutoSeededRandomPool m_rnd_generator;

	std::vector<uint8_t> m_session_key = {};

	enum class e_state {
		k_disconnected,
		k_connected,
		k_challenged,
		k_encrypted
	} m_state;
};