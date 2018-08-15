#include "DeleteNode.h"
#include "ReverseList.h"
#include "MergeList.h"

int main(int argc, char* argv[])
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node3 = new ListNode(4);

	ListNode* node4 = new ListNode(1);
	ListNode* node5 = new ListNode(3);
	ListNode* node6 = new ListNode(5);
	node1->next = node2;
	node2->next = node3;

	node4->next = node5;
	node5->next = node6;

	MergeList merge_list;
	ListNode* ret = merge_list.mergeTwoLists(node1, node4);
	/*ReverseList reverse_list;
	ListNode* head = reverse_list.reverseList(node1);*/
}