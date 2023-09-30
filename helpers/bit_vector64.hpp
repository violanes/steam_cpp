#include <iostream>

struct c_bit_vector64 {
	explicit c_bit_vector64(uint64_t value = 0) {
		data = value;
	}

	void apply(unsigned short offset, uint64_t mask, uint64_t value) {
		data = (data & ~(mask << offset)) | ((value & mask) << offset);
	}

	uint64_t data;
};