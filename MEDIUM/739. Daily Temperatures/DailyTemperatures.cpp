//
// Created by Savin Vladimir on 23.01.2023.
//

// Given an array of integers temperatures represents the daily temperatures, return an array answer such that
// answer[i] is the number of days you have to wait after the ith day to get a warmer temperature.
// If there is no future day for which this is possible, keep answer[i] == 0 instead.

// Accepted

#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    static vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> st;

        for (int i = temperatures.size() - 1; 0 <= i; i--) {
            while (!st.empty() && temperatures[i] >= st.top().first) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top().second - i;
            }
            st.emplace(temperatures[i], i);
        }
        return ans;
    }
};


int main() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans = Solution::dailyTemperatures(temperatures);

    for (int i: ans) {
        cout << i;
    }

    return 0;
}

// O(n^2) TL

/*
        vector<int> ans(temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++) {
            for (int j = i+1; j < temperatures.size(); j++) {
                if (temperatures[j] > temperatures[i]) {
                    ans[i] = j - i;
                    break;
                }
            }
        }

        return ans;
 */
