#include <string>

using namespace std;

class Atoi {
public:
	int myAtoi(string str) {

		bool is_negative = false;
		bool is_overflow = false;
		bool meet_non_white_space = false;
		if (str.empty())
			return 0;

		int ret = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!meet_non_white_space && str[i] == ' ')
			{
				continue;
			}
			else
			{
				if (!meet_non_white_space && str[i] == '-')
				{
					is_negative = true;
				}
				else if (!meet_non_white_space && str[i] == '+')
				{
					is_negative = false;
				}
				else if (str[i] >= '0' && str[i] <= '9')
				{
					int temp = ret;
					ret = ret * 10 + str[i] - '0';
					if (ret / 10 != temp)
					{
						is_overflow = true;
						break;
					}
				}
				else
				{
					break;
				}
				meet_non_white_space = true;
			}
		}

		if (is_overflow)
		{
			if (is_negative)
			{
				return INT_MIN;
			}
			else
			{
				return INT_MAX;
			}
		}
		else
		{
			if (is_negative)
			{
				return -ret;
			}
			else
			{
				return ret;
			}
		}
	}
};