#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) 
	{
		unordered_set<int> set;

		for (auto iter = nums.begin(); iter != nums.end(); iter++)
		{
			if (set.find(*iter) != set.end())
			{
				return true;
			}
			else
			{
				set.insert(*iter);
			}
		}
		return false;
	}
};