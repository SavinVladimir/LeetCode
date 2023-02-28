//
// Created by Savin Vladimir on 25.01.2023.
//

// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that
// i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Accepted

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        if (nums.size() < 3) {
            return {};
        }
        vector<vector<int>> ans;
        int sum;

        sort(nums.begin(), nums.end());

        if (nums[0] > 0) {
            return {};
        }

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    int next_l = nums[l], next_r = nums[r];
                    while (l < r && nums[l] == next_l) {
                        l++;
                    }
                    while (l < r && nums[r] == next_r) {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};


int main() {
    return 0;
}
