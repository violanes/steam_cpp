#ifndef I_ENCRYPTION
#define I_ENCRYPTION

#include <iostream>
#include <vector>

class i_encryption {
public:
	~i_encryption() = default;;

	virtual void process_incoming(std::vector<uint8_t>* buffer) = 0;
	virtual void process_outgoing(std::vector<uint8_t>* buffer) = 0;
};

#endif