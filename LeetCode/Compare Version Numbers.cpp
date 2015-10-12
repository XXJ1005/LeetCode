//#include "common.h"
//
//int cutNumber(string &str) {
//	int i = 0;
//	for (; i < str.size(); ++i) {
//		if (str[i] == '.') break;
//	}
//
//	int result = 0;
//	if (i == 0) {
//		result = 0;
//		if (str.size() > 1)
//			str = str.substr(1, str.size() - 1);
//		else
//			str = "";
//	}
//	else if (i == str.size() - 1 || i == str.size()) {
//		result = atoi((str.substr(0, i)).c_str());
//		str = "";
//	}
//	else {
//		result = atoi((str.substr(0, i)).c_str());
//		str = str.substr(i + 1, str.size() - i - 1);
//	}
//	return result;
//}
//
//int compareVersion(string version1, string version2) {
//	while (version1.size() && version2.size()) {
//		int v1 = cutNumber(version1);
//		int v2 = cutNumber(version2);
//		if (v1 > v2) return 1;
//		else if (v1 < v2) return -1;
//	}
//	if (version1.size()) {
//		int temp = cutNumber(version1);
//		while (temp == 0 && version1.size()) {
//			temp = cutNumber(version1);
//		}
//		if (temp == 0) return 0;
//		else return 1;
//	}
//	if (version2.size()) {
//		int temp = cutNumber(version2);
//		while (temp == 0 && version2.size()) {
//			temp = cutNumber(version2);
//		}
//		if (temp == 0) return 0;
//		else return -1;
//	}
//	return 0;
//}
//
//int main() {
//	string s, t;
//	while (cin >> s >> t) {
//		cout << compareVersion(s, t) << endl;
//	}
//	return 0;
//}