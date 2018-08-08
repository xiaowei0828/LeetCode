#include <vector>
#include <unordered_map>
using namespace std;

class TwoSum {
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++)
		{
			map[nums[i]] = i;
		}

		vector<int> result;
		for (int i = 0; i < nums.size(); i++)
		{
			int value = target - nums[i];
			if (map.find(value) != map.end() && map[value] != i)
			{
				result.push_back(i);
				result.push_back(map[value]);
				break;
			}
		}
		return result;
	}
};