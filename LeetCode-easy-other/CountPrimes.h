#include <math.h>
#include <memory.h>

class CountPrimes {
public:
	int countPrimes(int n) {
		if (n <= 0)
			return 0;

		int* flag = new int[n];
		memset(flag, 1, n * sizeof(int));
		int limit = sqrt((double)n);
		for (int i = 2; i <= limit; i++)
		{
			for (int j = i * 2; j < n; j += i)
			{
				flag[j] = 0;
			}
		}

		int count = 0;
		for (int i = 2; i < n; i++)
		{
			if (flag[i])
				++count;
		}

		delete [] flag;

		return count;
	}
};