#include <string>

using namespace std;

class Strstr {
public:
	int strStr(string haystack, string needle) {
		if (needle.empty())
		{
			return 0;
		}

		int m = haystack.size();
		int n = needle.size();
		if (m < n)
			return -1;

		for (int i = 0; i < m - n + 1; i++)
		{
			int j = 0;
			for (j = 0; j < n; ++j) {
				if (haystack[i + j] != needle[j]) break;
			}
			if (j == n) return i;
		}

		return -1;
	}
};