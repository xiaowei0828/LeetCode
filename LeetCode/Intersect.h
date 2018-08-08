#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> map;
		for (auto iter = nums1.begin(); iter != nums1.end(); iter++)
		{
			if (map.find(*iter) == map.end())
			{
				map[*iter] = 1;
			}
			else
			{
				map[*iter]++;
			}
		}

		vector<int> result;
		for (auto iter = nums2.begin(); iter != nums2.end(); iter++)
		{
			if (map.find(*iter) != map.end()
				&& map[*iter] != 0)
			{
				result.push_back(*iter);
				map[*iter]--;
			}
		}

		return result;
	}
};