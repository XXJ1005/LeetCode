//#include "common.h"
//
//bool isPalindrome(string s) {
//	int len = s.size();
//	int begin = 0;
//	int end = len - 1;
//	while (begin < end) {
//		while (begin < end && (s[begin] < 'a' || s[begin] > 'z') && (s[begin] < 'A' || s[begin] > 'Z') && (s[begin] < '0' || s[begin] > '9')) {
//			begin++;
//		}
//		while (begin < end && (s[end] < 'a' || s[end] > 'z') && (s[end] < 'A' || s[end] > 'Z') && (s[end] < '0' || s[end] > '9')) {
//			end--;
//		}
//		if (s[begin] != s[end] && s[begin] != s[end] + 'A' - 'a' && s[begin] + 'A' - 'a' != s[end])
//			return false;
//		begin++;
//		end--;
//	}
//	return true;
//}
//
//int main() {
//	string s;
//	char sad[1026];
//	//gets_s(sad, 1024);
//	while (gets_s(sad, 1024)) {
//		if (isPalindrome(sad)) {
//			cout << "ok" << endl;
//		}
//		else {
//			cout << "no" << endl;
//		}
//	}
//}