#include <vector>
using namespace std;

class MissingNumber{
public:
	int missingNumber(vector<int>& nums) {
		
		int sum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			sum += nums[i];
		}

		int n = nums.size();
		int sum1 = (n *(n + 1)) >> 1;
		return sum1 - sum;
		
	}
};