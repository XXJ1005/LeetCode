#if 0
#include "common.h"

int* getNext(string b) {
	int len = b.size();
	if (len == 0) return NULL;
	int j = 0;

	int *next = new int[len + 1];
	next[0] = next[1] = 0;

	for (int i = 1; i<len; i++)
	{
		while (j>0 && b[i] != b[j])j = next[j];
		if (b[i] == b[j])j++;
		next[i + 1] = j;
	}

	return next;
}

int strStr(string haystack, string needle) {
	if (needle == "") return 0;
	if (needle.size() <= haystack.size()) {
		int *next = getNext(needle);
		int j = 0;
		for (int i = 0; i < haystack.size(); i++) {
			while (j > 0 && haystack[i] != needle[j])
				j = next[j];
			if (haystack[i] == needle[j])
				j++;
			if (j == needle.size()) {
				return i - j + 1;
			}
		}
	}
	return -1;
}

int main() {
	string s, t;
	while (cin >> s >> t) {
		cout << strStr(s, t) << endl;
	}
	return 0;
}

#endif