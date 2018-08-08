#include <string>

using namespace std;
class ReverseString {

public:
	string reverseString(string s) {
		int index = s.length() >> 1;
		int length = s.length();
		for (int i = 0; i < index; i++)
		{
			char c = s[i];
			s[i] = s[length - i - 1];
			s[length - i - 1] = c;
		}
		return s;
	}
};