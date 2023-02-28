//
// Created by Savin Vladimir on 27.01.2023.
//

// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes
// the sum of all numbers along its path.

// Note: You can only move either down or right at any point in time.

// Accepted

// TODO faster

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>> &grid) {
        int n = static_cast<int>(grid.size());
        int m = static_cast<int>(grid[0].size());

        vector<vector<int>> dp(n, vector<int>(m, 0));
        dp[0][0] = grid[0][0];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 && j > 0) {
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                } else if (j == 0 && i > 0) {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                } else if (i > 0 && j > 0) {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
                }
            }
        }

        return dp[n-1][m-1];

    }
};

int main() {
    vector<vector<int>> grid = {{1, 3, 1},
                                {1, 5, 1},
                                {4, 2, 1}};

    return 0;
}

