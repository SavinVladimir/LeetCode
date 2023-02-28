//
// Created by Savin Vladimir on 16.01.2023.
//

// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

// Accepted

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32; // ASCII
            }
        }
        return s;
    }
};

int main() {
    std::cout << Solution().toLowerCase("HFBHFHBHBHFBHBR");
    return 0;
}
