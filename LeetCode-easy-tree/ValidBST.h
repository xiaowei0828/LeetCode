#include "CommonType.h"
#include <limits>

class ValidBST {
public:

	bool visit(TreeNode* node, long long min, long long max)
	{
		if (!node)
			return true;

		if (node->val <= min || node->val >= max)
			return false;

		return visit(node->left, min, node->val) && visit(node->right, node->val, max);
	}

	bool isValidBST(TreeNode* root) {

		return visit(root, LLONG_MIN, LLONG_MAX);
	}
};