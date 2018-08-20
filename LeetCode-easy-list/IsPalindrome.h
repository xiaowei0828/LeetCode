#include "CommonType.h"

class IsPalindrome {
public:
	bool isPalindrome(ListNode* head) {
		if (!head)
			return true;

		int length = 0;
		ListNode* temp = head;
		while (temp)
		{
			++length;
			temp = temp->next;
		}

		if (length == 1)
			return true;

		int mid = length >> 1;
		if (length % 2 != 0)
			++mid;

		temp = head;
		int n = mid;
		while (n--)
		{
			temp = temp->next;
		}
		// reverse
		ListNode* curr = temp;
		ListNode* pre = 0;
		while (curr)
		{
			temp = curr->next;
			curr->next = pre;
			pre = curr;
			curr = temp;
		}

		ListNode* l1 = head;
		ListNode* l2 = pre;
		n = mid;
		if (length % 2 != 0)
			--n;

		for (int i = 0; i < n; i++)
		{
			if (l1->val != l2->val)
			{
				return false;
			}
			l1 = l1->next;
			l2 = l2->next;
		}

		return true;

	}
};