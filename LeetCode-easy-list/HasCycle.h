#include "CommonType.h"
#include <unordered_set>
using namespace std;

class HasCycle {
public:
	bool hasCycle(ListNode *head) {
		ListNode* fast = head;
		ListNode* slow = head;

		while (fast && fast->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow)
			{
				return true;
			}
		}
		return false;
	}
};