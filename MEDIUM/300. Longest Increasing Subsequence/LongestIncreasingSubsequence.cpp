//
// Created by Savin Vladimir on 29.01.2023.
//

// Given an integer array nums, return the length of the longest strictly increasing subsequence

// Accepted

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> dp(n,1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i] && dp[i] < dp[j] + 1) {
                    dp[i] = max(dp[j], dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
int main() {
    vector<int> arr = {10,9,2,5,3,7,101,18};
    cout << Solution().lengthOfLIS(arr);

    return 0;
}
