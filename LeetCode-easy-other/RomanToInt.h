#include <string>
#include <unordered_map>
using namespace std;

class RomanToInt {
public:
	int romanToInt(string s) {
		unordered_map<char, int> map = {
			{ 'I', 1 }, { 'V', 5 }, { 'X', 10 },
			{ 'L', 50 }, { 'C', 100 }, {'D', 100},
			{'M', 1000}
		};
		int result = 0;
		for (int i = 0; i < s.length(); i++)
		{
			int val = map[s[i]];
			if (i == s.length() - 1 || map[s[i + 1]] <= map[s[i]])
				result += val;
			else
				result -= val;
		}
		return result;
	}
};