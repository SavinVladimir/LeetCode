//
// Created by Savin Vladimir on 26.01.2023.
//

// Given an array nums of n integers, return an array of all the unique quadruplets
// [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target

// You may return the answer in any order.

// Accepted

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> ans;
        if (nums.size() < 4) {
            return ans;
        }
        sort(nums.begin(), nums.end());
        if (nums[0] > target && nums[0] > 0) {
            return ans;
        }

        for (int i = 0; i < nums.size() - 3; i++) {
            long long target_3sum = target - nums[i];
            for (int j = i + 1; j < nums.size() - 2; j++) {
                long long target_2sum = target_3sum - nums[j];
                int l = j + 1;
                int r = nums.size() - 1;
                while (l < r) {
                    long long int sum = nums[l] + nums[r];
                    if (sum < target_2sum) {
                        l++;
                    } else if (sum > target_2sum) {
                        r--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        int next_l = nums[l], next_r = nums[r];
                        while (l < r && nums[l] == next_l) {
                            l++;
                        }
                        while (l < r && nums[r] == next_r) {
                            r--;
                        }
                    }
                }
                while (j + 1 < nums.size() && nums[j + 1] == nums[j]) {
                    j++;
                }
                while (i + 1 < nums.size() && nums[i + 1] == nums[i]) {
                    i++;
                }
            }
        }
        return ans;
    }
};


int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = Solution().fourSum(nums, target);

    for (auto i: ans) {
        for (auto j: i) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
