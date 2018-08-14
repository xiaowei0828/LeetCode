#include <string>

using namespace std;

class Palindrome {
public:
	bool isPalindrome(string s) 
	{
		string temp;
		temp.reserve(s.length());
		for (size_t i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] - 'A' + 'a';
			}

			if ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= '0' && s[i] <= '9'))
			{
				temp.push_back(s[i]);
			}
		}

		if (temp.empty())
			return true;

		for (int i = 0, j = temp.length() - 1; i < temp.length(), j >= 0; i++, j--)
		{
			if (temp[i] != temp[j])
			{
				return false;
			}
		}

		return true;
	}
};