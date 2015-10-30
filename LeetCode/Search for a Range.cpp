#if 0
#include "common.h"

int searchNumber(vector<int>& nums, int target, int begin, int end) {
	while (begin <= end) {
		int half = (begin + end) / 2;
		if (nums[half] == target) {
			return half;
		}
		if (nums[half] > target) {
			end = half - 1;
		}
		else {
			begin = half + 1;
		}
	}

	return -1;
}
vector<int> searchRange(vector<int>& nums, int target) {
	vector<int> result;
	int begin = 0, end = nums.size() - 1;
	int first = searchNumber(nums, target, begin, end);

	int temp = searchNumber(nums, target, begin, first - 1);
	int left = temp;
	while (temp != -1) {
		left = temp;
		temp = searchNumber(nums, target, begin, left - 1);
	}

	if (left != -1) {
		result.push_back(left);
	}
	else {
		result.push_back(first);
	}

	temp = searchNumber(nums, target, first + 1, end);
	int right = temp;
	while (temp != -1) {
		right = temp;
		temp = searchNumber(nums, target, right + 1, end);
	}
	if (right != -1) {
		result.push_back(right);
	}
	else {
		result.push_back(first);
	}

	return result;
}

int main() {
	int n, target;
	while (cin >> n >> target) {
		int temp;
		vector<int> nums;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			nums.push_back(temp);
		}
		vector<int> result = searchRange(nums, target);
		cout << result[0] << " " << result[1] << endl;
	}
	return 0;
}

#endif