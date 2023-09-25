#include "i_encryption.hpp"

#include <array>

class c_encryption_with_hmac : public i_encryption {
public:
	explicit c_encryption_with_hmac(const std::vector<uint8_t>& session_key);

	void process_incoming(std::vector<uint8_t>* buffer) override;
	void process_outgoing(std::vector<uint8_t>* buffer) override;
private:
	std::vector<uint8_t> m_session_key;
	std::array<uint8_t, 16> m_hmac_secret{};
};