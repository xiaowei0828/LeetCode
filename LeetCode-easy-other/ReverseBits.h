#include <stdint.h>

class ReverseBits {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t result = 0;

		for (int i = 0; i < 32; i++)
		{
			int temp = 1 << i;
			if (n & temp)
			{
				temp = 1 << (31 - i);
				result += temp;
			}
		}
		return result;
	}
};