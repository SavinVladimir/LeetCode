//
// Created by Savin Vladimir on 01.03.2023.
//

// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum
// is closest to target.
// Return the sum of the three integers.
//
// You may assume that each input would have exactly one solution.

// Accepted

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
        int mn = INT_MAX;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int r = i + 1;
            int l = nums.size() - 1;
            while (r < l) {
                int sum = nums[i] + nums[r] + nums[l];
                int diff = abs(sum - target);

                if (diff < mn) {
                    mn = diff;
                    ans = sum;
                }
                if (sum > target) {
                    l--;
                } else {
                    r++;
                }
            }
        }
        return ans;
    }
};


int main() {
    vector<int> nums = {4, 0, 5, -5, 3, 3, 0, -4, -5};
    int target = -2;
    cout << Solution().threeSumClosest(nums, target);
    return 0;
}
