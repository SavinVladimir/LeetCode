// Given an array of integers nums and an integer target, return indices of the two numbers
// such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.


// Accepted


#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> values;
        for (int i = 0; i < nums.size(); i++) {
            if (values.find(target - nums[i]) == values.end())
                values[nums[i]] = i;
            else
                return {values[target - nums[i]], i};
        }
        return {-1, -1};
    }
};

class SolutionTwoPointers {
public:
    vector<int> twoSumPointers(vector<int> &nums, int target) {
        vector<pair<int, int>> indexes;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            indexes.emplace_back(nums[i], i);
        }

        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            if (nums[l] + nums[r] == target) {
                break;
            }

            if (nums[l] + nums[r] > target) {
                r--;
            } else {
                l++;
            }
        }

        for (auto el: indexes) {
            if (el.first == nums[r] || el.first == nums[l]) {
                ans.push_back(el.second);
            }
        }

        return ans;

    }
};
