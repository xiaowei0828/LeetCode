#include <math.h>

class PowerOfThree {
public:
	bool isPowerOfThree(int n) {
		if (n <= 0)
			return false;
		int k = log((double)0x7fffffff) / log((double)3);
		int max_three_power = pow((double)3, k);

		return max_three_power % n == 0;
	}
};