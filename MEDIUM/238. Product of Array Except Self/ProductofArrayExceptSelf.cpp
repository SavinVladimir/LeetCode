//
// Created by Savin Vladimir on 15.03.2023.
//

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the
// elements of nums except nums[i].
//
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//
// You must write an algorithm that runs in O(n) time and without using the division operation.

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        vector<int> res(nums.size(), 1);
        int s = nums.size();

        int pref = 1;
        for (int i = 0; i < s; ++i) {
            res[i] = pref;
            pref = nums[i] * pref;
        }

        int post = 1;
        for (int i = s - 1; i >= 0; --i) {
            res[i] = res[i] * post;
            post = nums[i] * post;
        }

        return res;

    }
};
