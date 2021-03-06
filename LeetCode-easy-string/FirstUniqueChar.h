
#include <string>
#include <unordered_map>
using namespace std;

class FirstUniqueChar {

public:
	int firstUniqChar(string s) 
	{
		int counter[26] = { 0 };
		for (size_t i = 0; i < s.length(); i++)
		{
			++counter[s[i] - 'a'];
		}

		for (size_t i = 0; i < s.length(); i++)
		{
			if (counter[s[i] - 'a'] == 1)
			{
				return i;
			}
		}
		return -1;
	}
};