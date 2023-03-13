//
// Created by Savin Vladimir on 13.03.2023.
//

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
// typically using all the original letters exactly once.

#include <iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int count[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            count[s[i]]++;
            count[t[i]]--;
        }

        for (int el: count)
            if (el != 0) {
                return false;
            }

        return true;

    }
};
