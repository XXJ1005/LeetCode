#if 0
#include "common.h"


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


ListNode* partition(ListNode* head, int x) {
	if (NULL == head || NULL == head->next) return head;

	ListNode *flarge = NULL, *large = NULL, *temp = head;
	while (temp) {
		if (temp->val >= x) {
			large = temp;
			break;
		}
		flarge = temp;
		temp = temp->next;
	}
	if (large == NULL) return head;

	bool flag = false;
	if (flarge == NULL) flag = true;

	ListNode *fsmall = NULL;
	while (temp) {
		ListNode *small = NULL;
		while (temp) {
			if (temp->val < x) {
				small = temp;
				temp = temp->next;
				break;
			}
			fsmall = temp;
			temp = temp->next;
		}
		if (small == NULL) return head;
		if (flag) {
			head = small;
			fsmall->next = small->next;
			small->next = large;
			flarge = small;
			flag = false;
		}
		else {
			fsmall->next = small->next;
			small->next = large;
			flarge->next = small;
			flarge = small;
		}
	}
	return head;
}

int main() {
	int n, k, temp;
	while (cin >> n >> k) {
		cin >> temp;
		ListNode *head = new ListNode(temp);
		ListNode *tmpHead = head;
		for (int i = 1; i < n; i++) {
			cin >> temp;
			ListNode *hell = new ListNode(temp);
			tmpHead->next = hell;
			tmpHead = hell;
		}
		ListNode* hoo = partition(head, k);
		while (hoo) {
			cout << hoo->val << " ";
			hoo = hoo->next;
		}
		cout << endl << endl;
	}
	return 0;
}
#endif