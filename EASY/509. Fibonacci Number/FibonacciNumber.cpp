//
// Created by Savin Vladimir on 12.11.2022.
//

//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
// such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.

// Given n, calculate F(n).

// Accepted

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static int fib(int n) {
        vector<int> dp(n + 2, 0);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

/*class Solution {
public:
    static int fib(int n) {
        if (n == 0) {
            return n;
        }
        int first, second, answer;
        first = 0;
        second = 1;

        for (int i = 0; i < n-1; i++) {
            answer = first + second;
            first = second;
            second = answer;
        }
        return answer;
    }
};*/


int main() {
    int n = 1;
    std::cout << Solution::fib(n);
    return 0;
}