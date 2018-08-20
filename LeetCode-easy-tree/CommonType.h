#ifndef COMMON_TYPE_H
#define COMMON_TYPE_H

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(0), right(0) {}
};

#endif