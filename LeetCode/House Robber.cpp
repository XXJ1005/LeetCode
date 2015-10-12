
#if 0
#include "common.h"

int max[10000];
int rob(vector<int>& nums) {
	int len = nums.size();
	if (!len) return 0;
	if (len == 1) return nums[0];
	if (len == 2) return nums[0] > nums[1] ? nums[0] : nums[1];
	max[0] = nums[0];
	max[1] = nums[0] > nums[1] ? nums[0] : nums[1];
	for (int i = 2; i < len; i++) {
		max[i] = max[i - 2] + nums[i] > max[i - 1] ? max[i - 2] + nums[i] : max[i - 1];
	}
	return max[len - 1];
}

int main() {
	int n;
	while (cin >> n && n > 0) {
		vector<int> nums;
		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			nums.push_back(temp);
		}

		cout << "Max Money: " << rob(nums) << endl;
	}
	return 0;
}
#endif