# Accepted
class Solution:
    @staticmethod
    def fib(n: int) -> int:
        if n <= 1:
            return n
        first = 0
        second = 1
        for i in range(n-1):
            ans = first + second
            first = second
            second = ans
        return ans

print(Solution.fib(12))
