#include <vector>
#include <algorithm>
using namespace std;

class ThreeSum {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> result;
		if (nums.size() == 0)
			return result;
		
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >0) continue;
			if (i > 0 && nums[i] == nums[i-1]) continue;
			int j = i + 1;
			int k = nums.size() - 1;
			int target = -nums[i];
			while (j < k)
			{
				if (nums[j] + nums[k] == target)
				{
					result.push_back({ nums[i], nums[j], nums[k] });
					while (j < k && nums[j] == nums[j + 1]) j++;
					while (j < k && nums[k] == nums[k - 1]) k--;
					++j;
					--k;
				}
				else if (nums[j] + nums[k] < target) j++;
				else k--;
			}
		}
		return result;
	}
};