#include <string>

using namespace std;

class CountAndSay {
public:

	string parse(string value)
	{
		string ret;
		int i = 0;
		int length = value.length();
		char curr = value[i];
		int count = 1;
		while (++i < length)
		{
			if (value[i] == curr)
			{
				count++;
			}
			else
			{
				ret.push_back('0' + count);
				ret.push_back(curr);
				curr = value[i];
				count = 1;
			}
		}
		ret.push_back('0' + count);
		ret.push_back(curr);

		return ret;
	}

	string countAndSay(int n) {

		string value = "1";
		for (int i = 0; i < n - 1; i++)
		{
			value = parse(value);
		}
		return value;
	}
};