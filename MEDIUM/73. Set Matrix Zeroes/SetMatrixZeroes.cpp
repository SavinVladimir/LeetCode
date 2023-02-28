//
// Created by Savin Vladimir on 29.01.2023.
//

// Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's.

#include <set>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) {
        set<int> x;
        set<int> y;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    x.insert(i);
                    y.insert(j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (x.count(i) > 0 || y.count(j) > 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (auto row: matrix) {
            for (auto el: row) {
                cout << el << " ";
            }
            cout << "\n";
        }

    }
};

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1},{1, 1, 1}};


    Solution().setZeroes(matrix);


    return 0;
}