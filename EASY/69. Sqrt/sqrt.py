# Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
# The returned integer should be non-negative as well.

# You must not use any built-in exponent function or operator.
# For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

# Accepted

class Solution:
    def mySqrt(self, x: int) -> int:
        l, r = 0, x + 1
        while l < r:
            mid = (l + r) // 2
            if mid * mid > x:
                r = mid
            else:
                l = mid + 1
        return l - 1


s = Solution()
print(s.mySqrt(4))
