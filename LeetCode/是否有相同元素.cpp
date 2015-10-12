//#include "common.h"
//
//
//bool fun(int *a, int n) {
//	for (int i = 0; i < n; i++) {
//		if (a[i] < 1 || a[i] > n) return false;
//		if (a[i] != i + 1) {
//			if (a[a[i] - 1] == a[i]) return false;
//			swap(a[i], a[a[i] - 1]);
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	int a[100];
//	while (cin >> n) {
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		if (fun(a, n))
//			cout << "ok" << endl;
//		else
//			cout << "no" << endl;
//	}
//}
