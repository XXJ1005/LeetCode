//#include "common.h"
//
//vector<vector<int>> result;
//void fun(vector<int> &origin, int index) {
//	int len = origin.size();
//	for (int i = index + 1; i < len; i++) {
//		vector<int> temp = origin;
//		swap(temp[index], temp[i]);
//		result.push_back(temp);
//	}
//}
//
//vector<vector<int>> permute(vector<int>& nums) {
//	int len = nums.size();
//	if (len == 0) return result;
//
//	result.push_back(nums);
//	for (int i = 0; i < len - 1; i++) {
//		int n = result.size();
//		for (int j = 0; j < n; j++) {
//			fun(result[j], i);
//		}
//	}
//
//	return result;
//}
//
//int main() {
//	vector<int> test;
//	test.push_back(1);
//	test.push_back(2);
//	test.push_back(3);
//	test.push_back(4);
//
//	vector<vector<int>> hh = permute(test);
//
//	for (int i = 0; i < hh.size(); i++) {
//		for (int j = 0; j < hh[i].size(); j++) {
//			cout << hh[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	int j;
//	cin >> j;
//	return 0;
//}