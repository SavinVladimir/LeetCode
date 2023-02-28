//
// Created by Savin Vladimir on 27.01.2023.
//

// You are given an m x n integer array grid. There is a robot initially located at the top-left
// corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]).
// The robot can only move either down or right at any point in time.

// An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include
// any square that is an obstacle.

// Return the number of possible unique paths that the robot can take to reach the bottom-right corner.

// The testcases are generated so that the answer will be less than or equal to 2 * 10^9.

// Accepted

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        if (obstacleGrid[0][0] == 1) {
            return 0;
        }

        vector<vector<int>> dp(n, vector<int>(m, 0));

        for (int i = 0; i < obstacleGrid.size(); i++) {
            for (int j = 0; j < obstacleGrid[0].size(); j++) {
                if (obstacleGrid[i][j] == 1) {
                    dp[i][j] = 0;
                } else if (i == 0 && j == 0) {
                    dp[i][j] = 1;
                } else {
                    int left = 0, up = 0;
                    if (j - 1 >= 0) {
                        left = dp[i][j - 1];
                    }
                    if (i - 1 >= 0) {
                        up = dp[i - 1][j];
                    }
                    dp[i][j] = left + up;
                }
            }
        }
        return dp[n-1][m-1];

}
};
