//
// Created by Savin Vladimir on 12.03.2023.
//

// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static bool containsDuplicate(vector<int> &nums) {
        unordered_map<int, int> map;
        for (int elem: nums) {
            if(map[elem] == 1){
                return true;
            }
            map[elem] = 1;
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    cout << Solution::containsDuplicate(nums);

    return 0;
}
