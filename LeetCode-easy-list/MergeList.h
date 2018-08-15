#include "CommonType.h"

class MergeList {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		
		ListNode* result = 0;
		ListNode* curr = 0;
		ListNode* temp1 = l1;
		ListNode* temp2 = l2;
		while (temp1 != 0 && temp2 != 0)
		{
			ListNode* temp;
			if (temp1->val <= temp2->val)
			{
				temp = new ListNode(temp1->val);
				temp1 = temp1->next;
			}
			else
			{
				temp = new ListNode(temp2->val);
				temp2 = temp2->next;
			}
			if (!result)
				result = temp;
			if (curr)
				curr->next = temp;
			curr = temp;
		}
		if (temp1 != 0)
		{
			if (curr)
			{
				curr->next = temp1;
			}
			else
			{
				result = temp1;
			}
			
		}
		if (temp2 != 0)
		{
			if (curr)
			{
				curr->next = temp2;
			}
			else
			{
				result = temp2;
			}
			
		}
		return result;
	}
};