#if 0
#include "common.h"

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};


ListNode* removeElements(ListNode* head, int val) {
	if (!head)   return head;
	ListNode *temp;
	while (head && head->val == val) {
		temp = head;
		head = head->next;
		delete temp;
	}
	if (!head)   return head;

	ListNode *front = head;
	ListNode *next = head->next;
	while (next) {
		if (next->val == val) {
			front->next = next->next;
			delete next;
			next = front->next;
		}
		else {
			front = next;
			next = next->next;
		}
	}
	return head;
}

int main() {
	int n;
	while (cin >> n && n >= 1) {
		ListNode *head = new ListNode(0), *temp;
		int mm;
		cin >> mm;
		head->val = mm;
		temp = head;
		for (int i = 1; i < n; i++) {
			cin >> mm;
			ListNode *jj = new ListNode(mm);
			temp->next = jj;
			temp = jj;
		}
		cin >> mm;
		head = removeElements(head, mm);
		while (head) {
			cout << head->val << " ";
			head = head->next;
		}
		cout << endl;
	}
}
#endif