//
// Created by Savin Vladimir on 13.03.2023.
//

// Given an integer array nums and an integer k, return the k most frequent elements.
// You may return the answer in any order.

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> ans;
        priority_queue<int> maxHeap;
        for (auto &num:nums) {
            count[num]++;
        }
        for (auto &it:count) {
            maxHeap.push(it.second);
        }
        while (k>0) {
            int top = maxHeap.top();
            maxHeap.pop();
            for (auto &it:count) {
                if(top == it.second) {
                    ans.push_back(it.first);
                    count.erase(it.first);
                    k--;
                    break;
                }
            }
        }
        return ans;
    }
};
