#include "CommonType.h"
#include <vector>

using namespace std;

class SortedArrayToBST {
public:
	TreeNode* getTree(vector<int>& nums, int start, int end)
	{
		if (start > end)
			return 0;

		int mid = start + ((end - start) >> 1);
		TreeNode* node = new TreeNode(nums[mid]);
		node->left = getTree(nums, start, mid - 1);
		node->right = getTree(nums, mid + 1, end);
		return node;
	}

	TreeNode* sortedArrayToBST(vector<int>& nums) {

		if (nums.size() == 0)
			return 0;

		return getTree(nums, 0, nums.size() - 1);
	}
};