#if 0
#include "common.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {
public:
	BSTIterator(TreeNode *root) {
		while (root) {
			buffer.push(root);
			root = root->left;
		}
	}

	/** @return whether we have a next smallest number */
	bool hasNext() {
		return !buffer.empty();
	}

	/** @return the next smallest number */
	int next() {
		if (hasNext()) {
			TreeNode *currentNode = buffer.top();
			TreeNode *addNode = currentNode->right;
			buffer.pop();
			while (addNode) {
				buffer.push(addNode);
				addNode = addNode->left;
			}
			return currentNode->val;
		}
		return 0;
	}
private:
	stack<TreeNode *> buffer;
};

/**
* Your BSTIterator will be called like this:
* BSTIterator i = BSTIterator(root);
* while (i.hasNext()) cout << i.next();
*/

#endif
