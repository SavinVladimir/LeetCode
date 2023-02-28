//
// Created by Savin Vladimir on 27.12.2022.
//

// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers
// such that they add up to a specific target number.
// Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as
// an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

// Accepted


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ans;

        int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            if (numbers[l] + numbers[r] == target) {
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }

            if (numbers[l] + numbers[r] > target) {
                r--;
            } else {
                l++;
            }
        }

        return ans;

    }
};

int main() {
    vector<int> numbers = {-1, 0};
    int target = -1;

    int l = 0;
    int r = numbers.size() - 1;

    while (l < r) {
        if (numbers[l] + numbers[r] == target) {
            break;
        }

        if (numbers[l] + numbers[r] > target) {
            r--;
        } else {
            l++;
        }
    }

    cout << l + 1 << " " << r + 1;


    return 0;
}
