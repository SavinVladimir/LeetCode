//
// Created by Savin Vladimir on 18.01.2023.
//

// The Tribonacci sequence Tn is defined as follows:

//T_0 = 0, T_1 = 1, T_2 = 1, and T_n+3 = T_n + T_n+1 + T_n+2 for n >= 0.

// Given n, return the value of T_n.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        return dp[n];
    }
};

int main() {
    int n = 38;
    std::cout << Solution().tribonacci(n);
    return 0;
}
