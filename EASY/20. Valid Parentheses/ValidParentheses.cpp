//
// Created by Savin Vladimir on 18.11.2022.
//

// Given a string s containing just the characters '(', ')', '{', '}', '[', ']', determine if the input string is valid.

// An input string is valid if:

// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.
// 3. Every close bracket has a corresponding open bracket of the same type.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char & i : s) {
            if (st.empty())
                st.push(i);
            else if (i == ')') {
                if (st.top() != '(')
                    return false;
                else st.pop();
            } else if (i == '}') {
                if (st.top() != '{')
                    return false;
                else st.pop();
            } else if (i == ']') {
                if (st.top() != '[')
                    return false;
                else st.pop();
            } else
                st.push(i);
        }
        if (st.empty())return true;
        return false;
    }
};

int main() {

    Solution obj;
    std::cout << obj.isValid("((()))");

    return 0;
}