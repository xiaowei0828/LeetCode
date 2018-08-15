#include "CommonType.h"

class ReverseList {
public:
	ListNode* reverseList(ListNode* head) {

		ListNode* pre = 0;
		ListNode* curr = head;
		while (curr)
		{
			ListNode* temp = curr->next;
			curr->next = pre;
			pre = curr;
			curr = temp;
		}
		return pre;
	}
};