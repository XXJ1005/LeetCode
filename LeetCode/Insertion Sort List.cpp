#if 1
#include "common.h"



struct ListNode {
	int val;
    ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


ListNode* insertionSortList(ListNode* head) {
	if (head == NULL) return head;

	ListNode *tmpHead = head;
	head = head->next;
	tmpHead->next = NULL;
	while (head) {
		ListNode *insertNode = head, *tmp = tmpHead, *forTmp = NULL;
		head = head->next;
		while (tmp && tmp->val < insertNode->val) {
			forTmp = tmp;
			tmp = tmp->next;
		}
		if (forTmp == NULL) {
			insertNode->next = tmpHead;
			tmpHead = insertNode;
		}
		else {
			insertNode->next = forTmp->next;
			forTmp->next = insertNode;
		}
	}

	return tmpHead;
}


int main() {
	int n;
	while (cin >> n) {
		int temp;
		cin >> temp;
		ListNode *head = new ListNode(temp);
		ListNode *tmp = head;
		for (int i = 0; i < n-1; i++) {
			cin >> temp;
			ListNode *hh = new ListNode(temp);
			tmp->next = hh;
			tmp = tmp->next;
		}

		tmp = insertionSortList(head);
		while (tmp) {
			cout << tmp->val << " ";
			tmp = tmp->next;
		}
		cout << endl;
	}
}
#endif