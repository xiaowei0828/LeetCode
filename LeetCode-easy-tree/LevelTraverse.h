#include <vector>
#include <queue>
#include "CommonType.h"

using namespace std;

class LevelTraverse {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> result;
		vector<int> vec_temp;
		if (!root)
			return result;

		queue<TreeNode*> queue;
		queue.push(root);
		
		while (!queue.empty())
		{
			int size = queue.size();
			vec_temp.clear();
			while (size--)
			{
				TreeNode* node = queue.front();
				vec_temp.push_back(node->val);
				if (node->left)
					queue.push(node->left);
				if (node->right)
					queue.push(node->right);

				queue.pop();
			}
			result.push_back(vec_temp);
			
		}
		return result;
	}
};