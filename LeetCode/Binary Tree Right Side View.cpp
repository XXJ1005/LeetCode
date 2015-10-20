#if 0
#include "common.h"

struct TreeNode {
    int val;     
	TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

void LevelVisit(TreeNode* root, vector<int> &result) {
	if (root) {

	}
}
vector<int> rightSideView(TreeNode* root) {
	vector<int> result;
	if (root) {
		queue<TreeNode*> level;
		TreeNode *flag = new TreeNode(0), *current;
		level.push(root);
		level.push(flag);
		int last = root->val;
		while (!level.empty()) {
			while (level.front() != flag) {
				current = level.front();
				level.pop();
				if (current->left) level.push(current->left);
				if (current->right) level.push(current->right);
				last = current->val;
			}
			result.push_back(last);
			level.pop();
			if (!level.empty()) {
				level.push(flag);
			}
		}
	}
	return result;
}

int main() {
	return 0;
}

#endif