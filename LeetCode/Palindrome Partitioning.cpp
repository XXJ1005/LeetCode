#if 0
#include "common.h"

bool isPalindrome(string s) {
	int len = s.size();
	for (int i = 0; i < len; ++i) {
		if (s[i] != s[len - i - 1])
			return false;
	}
	return true;
}

vector<vector<string>> partition(string s) {
	vector<vector<string>> result, subResult;
	int len = s.size();
	if (len < 0)
		return result;
	if (len == 1) {
		vector<string> st;
		st.push_back(s);
		result.push_back(st);
		return result;
	}
	string front;
	for (int i = 1; i < len; ++i) {
		front = s.substr(0, i);
		if (isPalindrome(front)){
			subResult = partition(s.substr(i, len - i));
			for (int j = 0, subLen = subResult.size(); j < subLen; ++j) {
				vector<string> merge;
				vector<string> back = subResult[j];
				merge.push_back(front);
				for (int m = 0, backLen = back.size(); m < backLen; ++m) {
					merge.push_back(back[m]);
				}
				result.push_back(merge);
			}
		}
	}
	if (isPalindrome(s)) {
		vector<string> total;
		total.push_back(s);
		result.push_back(total);
	}
	return result;
}

int main() {
	char sad[1026];
	while (gets_s(sad, 1024)) {
		vector<vector<string>> result = partition(sad);
		for (int i = 0; i < result.size(); ++i) {
			vector<string> sub = result[i];
			for (int j = 0; j < sub.size(); ++j) {
				cout << sub[j] << " ";
			}
			cout << endl;
		}
	}
}
#endif