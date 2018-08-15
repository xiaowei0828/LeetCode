#include "CommonType.h"

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {

		ListNode* first = head;
		
		while (n--)
		{
			first = first->next;
		}

		if (!first)
		{
			return head->next;
		}

		ListNode* second = head;

		while (first->next != 0)
		{
			first = first->next;
			second = second->next;
		}

		second->next = second->next->next;
		return head;
	}
};