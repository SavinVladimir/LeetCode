//
// Created by Savin Vladimir on 21.01.2023.
//

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day
// in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Accepted

#include <iostream>
#include <climits>
#include <vector>

using namespace std;

// int speedup = []{ios::sync_with_stdio(0); cin.tie(0); return 0;}(); // 124 ms -> 96 ms ???
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << Solution().maxProfit(prices) << "\n";
    return 0;
}
