#if 0
#include "common.h"

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


bool isOk(TreeNode *left, TreeNode * right) {
	 if (left == NULL && right == NULL) return true;
	 if (left == NULL || right == NULL || left->val != right->val) return false;
	 return isOk(left->left, right->right) && !isOk(left->right, right->left);
 }
bool isSymmetric(TreeNode* root) {
	if (NULL == root) return true;
	return isOk(root->left, root->right);
}

int main() {
	TreeNode *root = new TreeNode(1);
	TreeNode *L1 = new TreeNode(2);
	TreeNode *R1 = new TreeNode(2);
	root->left = L1;
	root->right = R1;
	L1->left = new TreeNode(3);
	R1->right = new TreeNode(3);


	if (isSymmetric(root))
		cout << "ok" << endl;
	else
		cout << "no" << endl;

	int n;
	cin >> n;
	return 0;
}
#endif