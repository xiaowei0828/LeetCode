#include "MaxDepth.h"
#include "ValidBST.h"
#include "SymmetricTree.h"
#include "LevelTraverse.h"
#include "SortedArrayToBST.h"

int main(int argc, char* argv[])
{
	TreeNode* node0 = new TreeNode(1);
	TreeNode* node1 = new TreeNode(2);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node4 = new TreeNode(4);
	TreeNode* node5 = new TreeNode(4);
	TreeNode* node6 = new TreeNode(3);
	node0->left = node1;
	node0->right = node2;
	node1->left = node3;
	node1->right = node4;
	node2->left = node5;
	node2->right = node6;

	/*LevelTraverse level_traverse;
	vector<vector<int>> result = level_traverse.levelOrder(node0);*/
	vector<int> test = {-10, -3, 0, 5, 9};
	SortedArrayToBST array_to_bst;
	TreeNode* result = array_to_bst.sortedArrayToBST(test);

	/*SymmetricTree symmetric_tree;
	bool ret = symmetric_tree.isSymmetric(node0);*/
	//MaxDepth max_depth;

	//int depth = max_depth.maxDepth(node0);
	/*ValidBST bst;
	bool ret = bst.isValidBST(node0);*/
	return 0;
}