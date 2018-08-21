#include <vector>
using namespace std;

class FizzBuzz {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> result;
		for (int i = 1; i <= n; i++)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				result.push_back("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				result.push_back("Fizz");
			}
			else if (i % 5 == 0)
			{
				result.push_back("Buzz");
			}
			else
			{
				string number;
				int temp = i;
				while (temp)
				{
					int remainder = temp % 10;
					number.insert(number.begin(), '0' + remainder);
					temp = temp / 10;
				}
				result.push_back(number);
			}
		}
		return result;
	}
};