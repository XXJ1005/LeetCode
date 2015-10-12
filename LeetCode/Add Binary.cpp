//#include "common.h"
//
//string addBinary(string a, string b) {
//	string result = a;
//	int k = a.size() - b.size();
//	int minLength = b.size();
//	if (a.size() < b.size()) {
//		result = b;
//		k = -k;
//		b = a;
//	}
//
//	int flag = 0;
//	int temp = 0;
//	for (int i = b.size() - 1; i >= 0; i--) {
//		temp = (result[i + k] - '0' + b[i] - '0' + flag);
//		result[i + k] = '0' + temp % 2;
//		flag = temp / 2;
//	}
//	for (int i = k - 1; i >= 0; i--) {
//		if (flag == 0) break;
//		temp = (result[i] - '0' + flag);
//		result[i] = '0' + temp % 2;
//		flag = temp / 2;
//	}
//	if (flag == 1) {
//		result = '1' + result;
//	}
//
//	return result;
//}
//
//int main() {
//	string a, b;
//	while (cin >> a >> b) {
//		cout << addBinary(a, b) << endl;
//		assert()
//	}
//	return 0;
//}