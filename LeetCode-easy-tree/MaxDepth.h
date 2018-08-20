
#include "CommonType.h"

class MaxDepth {
public:
	int maxDepth(TreeNode* root) {

		if (root)
		{
			int left = 1 + maxDepth(root->left);
			int right = 1 + maxDepth(root->right);
			if (left > right)
			{
				return left;
			}
			else
			{
				return right;
			}
		}
		else
		{
			return 0;
		}
		
	}
};