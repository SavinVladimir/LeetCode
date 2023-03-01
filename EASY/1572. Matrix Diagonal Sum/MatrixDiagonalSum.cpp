//
// Created by Savin Vladimir on 01.03.2023.
//

// Given a square matrix mat, return the sum of the matrix diagonals.
// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal
// that are not part of the primary diagonal.

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>> &mat) {
        int sum = 0;
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            sum += mat[i][n - i - 1];
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    sum += mat[i][j];
                }
            }
        }

        if (n % 2 != 0) {
            sum -= mat[n / 2][n / 2];
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> mat = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    vector<vector<int>> mat2 = {{1, 1, 1, 1},
                                {1, 1, 1, 1},
                                {1, 1, 1, 1},
                                {1, 1, 1, 1}};

    vector<vector<int>> mat3 = {{1}};

    cout << s.diagonalSum(mat);
    cout << s.diagonalSum(mat2);
    cout << s.diagonalSum(mat3);

    return 0;
}

