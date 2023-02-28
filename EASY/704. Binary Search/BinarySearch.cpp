//
// Created by Savin Vladimir on 29.10.2022.
//

// Accepted

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to
// search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static int search(vector<int> &nums, int target) {
        int r, l, med;
        r = 0;
        l = nums.size() - 1;
        while (r <= l) {
            med = (r + l) / 2;
            if (nums[med] == target) {
                return med;
            }
            if (nums[med] < target) {
                r = med + 1;
            } else {
                l = med - 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> a = {-1, 0, 3, 5, 9, 12, 13};
    int t = 9;
    std::cout << Solution::search(a, t);

    return 0;
}
