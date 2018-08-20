#include "CommonType.h"
#include <vector>

using namespace std;

class SymmetricTree {
public:
	bool isSymmetric(TreeNode* left, TreeNode* right)
	{
		if (!left && !right)
			return true;

		if (left && right)
		{
			if (left->val == right->val)
			{
				return isSymmetric(left->left, right->right) &&
					isSymmetric(left->right, right->left);
			}
			else
				return false;
		}
		else
			return false;
	}
	
	bool isSymmetric(TreeNode* root) {
		if (!root)
			return true;

		return isSymmetric(root->left, root->right);
	}
};