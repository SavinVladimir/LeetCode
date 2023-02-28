//
// Created by Savin Vladimir on 30.01.2023.
//

// You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:

// nums[0] = 0
// nums[1] = 1
// nums[2 * i] = nums[i] when 2 <= 2 * i <= n
// nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
// Return the maximum integer in the array nums.

// Acceptedx

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        int dp[n + 1];
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        dp[0] = 0;
        dp[1] = 1;
        int max_el = dp[1];

        for (int i = 2; i < n + 1; i++) {
            if (i % 2 == 0) {
                dp[i] = dp[i / 2];
            } else {
                dp[i] = dp[i / 2] + dp[(i / 2) + 1];
            }
            max_el = max(max_el, dp[i]);
        }

        return max_el;
    }
};

int main() {

    cout << Solution().getMaximumGenerated(7);


    return 0;
}