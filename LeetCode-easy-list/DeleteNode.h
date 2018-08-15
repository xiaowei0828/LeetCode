#include "CommonType.h"

class DeleteNode {
public:
	void deleteNode(ListNode* node, int n) {

		ListNode* pre = 0;
		ListNode* curr = node;
		while (curr)
		{
			if (curr->val == n)
			{
				if (pre)
				{
					pre->next = curr->next;
				}
				else
				{
					node = curr->next;
				}
				delete curr;
				break;
			}
			pre = curr;
			curr = curr->next;
		}
	}
};