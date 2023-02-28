//
// Created by Savin Vladimir on 01.02.2023.
//

// Given an integer rowIndex, return the rowIndex`th (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Accepted

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> a;
        for (int n = 0; n <= rowIndex; n++) {
            a.push_back({1});
            if (n > 1) {
                for (int k = 0; k < n - 1; k++) {
                    a[n].push_back(a[n-1][k] + a[n-1][k+1]);
                }
            }
            if (n > 0) {
                a[n].push_back(1);
            }
        }

        return a[rowIndex];
    }
};
