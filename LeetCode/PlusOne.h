#include <vector>

using namespace std;

class PlusOne {
public:
	vector<int> plusOne(vector<int>& digits) 
	{
		int flag = 1;
		vector<int> result;
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] == 9)
			{
				if (flag == 1)
				{
					result.insert(result.begin(),0);
					flag = 1;
				}
				else
				{
					result.insert(result.begin(), digits[i]);
				}
			}
			else
			{
				if (flag == 1)
				{
					result.insert(result.begin(),digits[i] + 1);
					flag = 0;
				}
				else
				{
					result.insert(result.begin(),digits[i]);
				}
			}
		}
		if (flag == 1)
		{
			result.insert(result.begin(), 1);
		}
		return result;
	}
};