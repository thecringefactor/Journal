#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		int n = nums.size();
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (nums[i] == nums[j])
					return true;
			}
		}
		return false;
	}
};

int main() {
	Solution solution;
	vector<int> nums = { 1, 2, 3, 4, 1 };

	cout << solution.containsDuplicate(nums);

	return 0;
}
