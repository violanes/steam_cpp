#include <iostream>

#pragma pack(push,1)

struct c_tcp_packet {
	uint32_t length;
	uint32_t magic;
};
#pragma pack(pop)