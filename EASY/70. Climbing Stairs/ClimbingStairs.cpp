//
// Created by Savin Vladimir on 15.11.2022.
//


// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
//   1. 1 step + 1 step
//   2. 2 steps

// Accepted

#include <iostream>

class Solution {
public:
    static int climbStairs(int n) {
        int ways[46];
        ways[0] = 0;
        ways[1] = 1;
        ways[2] = 2;
        for (int i = 3; i <= n; i++) {
            ways[i] = ways[i-1] + ways[i-2];
        }
        return ways[n];
    }
};

/*class Solution {
public:
    static int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            return 0;
        }
        return climbStairs(n-1) + climbStairs(n-2);
    }
};*/

int main() {
    int t = 12;
    std::cout << Solution::climbStairs(t);
    return 0;
}
