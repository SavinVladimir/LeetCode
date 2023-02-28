//
// Created by Savin Vladimir on 30.01.2023.
//

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Accepted

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for (int n = 0; n < numRows; n++) {
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

        return a;

    }
};

int main() {
    int numRows;
    vector<vector<int>> a;
    cin >> numRows;

    for (int n = 0; n < numRows; n++) {
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

    for (auto row: a) {
        for (auto el: row) {
            cout << el << " ";
        }
        cout << "\n";
    }

    return 0;
}
