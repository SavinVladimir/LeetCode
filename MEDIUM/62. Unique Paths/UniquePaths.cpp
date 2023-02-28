//
// Created by Savin Vladimir on 12.12.2022.
//

// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]).
// The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]).
// The robot can only move either down or right at any point in time.

// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach
// the bottom-right corner.

// Accepted

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};


int main() {
    int m, n;
    cin >> m >> n;

    cout << Solution::uniquePaths(m, n);

    return 0;
}
