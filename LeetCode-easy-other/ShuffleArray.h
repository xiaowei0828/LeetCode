#include <vector>
using namespace std;

class Solution {
public:
	Solution(vector<int> nums):vec_(nums){

	}

	/** Resets the array to its original configuration and return it. */
	vector<int> reset() {
		return vec_;
	}

	/** Returns a random shuffling of the array. */
	vector<int> shuffle() {
		vector<int> temp = vec_;
		for (int i = 0; i < temp.size(); i ++)
		{
			int t = i + rand() % (temp.size() - i);
			swap(temp[i], temp[t]);
		}
		return temp;
	}

private:
	vector<int> vec_;
};