#if 0
#include "common.h"


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* TransLeft(TreeNode* root) {
	if (root == NULL) return NULL;
	if (root->left == NULL && root->right == NULL) return root;

	TreeNode *last;
	if (root->right) {
		last = TransLeft(root->right);
		if (root->left)
			TransLeft(root->left)->left = root->right;
		else
			root->left = root->right;
	}
	else {
		last = TransLeft(root->left);
	}
	return last;
}

void flatten(TreeNode* root) {
	TransLeft(root);

	TreeNode* temp = root;
	while (temp) {
		temp->right = temp->left;
		temp->left = NULL;
		temp = temp->right;
	}
}

int main() {
	return 0;
}

#endif