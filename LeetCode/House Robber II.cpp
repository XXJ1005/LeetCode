#if 0
#include "common.h"

int rob(vector<int>& nums) {
	int len = nums.size();
	if (!len) return 0;
	if (len == 1) return nums[0];
	if (len == 2) return nums[0] > nums[1] ? nums[0] : nums[1];

	int result = 0;
	for (int i = 0; i < 3; i++) {
		vector<int> max(len, 0);
		max[i] = nums[i];
		max[i + 1] = max[i];
		for (int j = 2 + i; j < len - 1 + i; j++) {
			if (j == len) {
				max[0] = max[j - 2] + nums[0] > max[j - 1] ? max[j - 2] + nums[0] : max[j - 1];
			}
			else {
				max[j] = max[j - 2] + nums[j] > max[j - 1] ? max[j - 2] + nums[j] : max[j - 1];
			}
		}
		result = result > max[(len - 2 + i) % len] ? result : max[(len - 2 + i) % len];
	}

	return result;
}
int main() {
	int n;
	while (cin >> n) {
		vector<int> nums;
		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			nums.push_back(temp);
		}
		cout << rob(nums) << endl;
	}
	return 0;
}
#endif
