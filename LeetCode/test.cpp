//#include "common.h"
//#include "stdarg.h"
//
//int fun(int x, int y) {
//	return x - y;
//}
//
//int fun(int x, ...) {
//	va_list arg_ptr; // ��ͬ�� char *arg_ptr;
//
//	int nArgValue = x;
//	int nArgCout = 0; 
//	va_start(arg_ptr, x); // ��ȡ�ڶ��������ĵ�ַ
//
//	int sum = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		++nArgCout;
//		nArgValue = va_arg(arg_ptr, int); // ��arg_ptr��ָ�������س�int���ƶ�arg_ptrʹ��ָ���һ������
//		printf("the %d th arg: %d\n", i+1, nArgValue);     //�����������ֵ
//		sum += nArgValue;
//	}
//	return sum;
//}
//int main() {
//
//	cout << fun(0) << endl << endl;
//	cout << fun(1, 1) << endl << endl; // ����ƥ�䵽����int fun(int, int),���0
//	cout << fun(2, 3, 4) << endl << endl;
//	int jj;
//	cin >> jj;
//
//	return 0;
//}
//
////���������������ݽṹ:ջ����ʽ��ȡ,����������ջ
////void fun(int a, ...)
////{
////	int *temp = &a;
////	temp++;
////	for (int i = 0; i < a; ++i)
////	{
////		cout << *temp << endl;
////		temp++;
////	}
////}
////
////int main()
////{
////	int a = 1;
////	int b = 2;
////	int c = 3;
////	int d = 4;
////	fun(4, a, b, c, d);
////
////	system("pause");
////	return 0;
////}

#if 1

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TrieNode {
public:
	TrieNode() {
		is_key = false;

		child.resize(26);
		for (int i = 0; i < 26; i++) {
			child[i] = nullptr;
		}
	}

	bool is_key;
	vector<TrieNode *> child;
};

class WordDictionary {
public:

	WordDictionary() {
		root = new TrieNode();
	}

	~WordDictionary() {
		delete root;
	}

	// Adds a word into the data structure.
	void addWord(string word) {
		TrieNode *node = root;
		for (int i = 0; i < word.size(); i++) {
			TrieNode *tmp = (node->child[word[i] - 'a']);
			if (tmp == nullptr) {
				tmp = new TrieNode();
			}
			node = tmp;
		}
		node->is_key = true;
	}

	// Returns if the word is in the data structure. A word could
	// contain the dot character '.' to represent any one letter.
	bool search(string word) {
		return DFS(0, word, root);
	}

	bool DFS(int idx, string &word, TrieNode *node) {
		if (idx == word.size()) {
			return true;
		}

		if (word[idx] == '.') {
			for (int i = 0; i < 26; i++) {
				if (node->child[i] != nullptr) {
					if (DFS(idx + 1, word, node->child[i])) {
						return true;
					}
				}
			}
			return false;
		}
		else {
			if (node->child[word[idx] - 'a'] != nullptr) {
				return DFS(idx + 1, word, node->child[word[idx] - 'a']);
			}
			return false;
		}
	}

private:
	TrieNode *root;
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");

int main() {
	WordDictionary word;
}

#endif
