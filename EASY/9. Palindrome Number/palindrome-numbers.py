# Given an integer x, return true if x is a palindrome, and false otherwise.

# Accepted

class Solution:
    def isPalindrome(self, x: int) -> bool:
        return str(x) == str(x)[::-1]
