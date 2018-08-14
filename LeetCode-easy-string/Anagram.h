#include <string>
using namespace std;

class Anagram {
public:
	bool isAnagram(string s, string t) 
	{
		if (s.length() != t.length())
			return false;

		int a[26] = { 0 };

		for (size_t i = 0; i < s.length(); i++)
		{
			++a[s[i] - 'a'];
		}

		for (size_t i = 0; i < t.length(); i++)
		{
			--a[t[i] - 'a'];
		}

		for (int i = 0; i < 26; i++)
		{
			if (a[i] != 0)
			{
				return false;
			}
		}
		return true;
	}
};