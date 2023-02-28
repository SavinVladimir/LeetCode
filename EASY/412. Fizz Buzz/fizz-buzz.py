# Given an integer n, return a string array answer (1-indexed) where:

# answer[index] == "FizzBuzz" if index is divisible by 3 and 5.
# answer[index] == "Fizz" if index is divisible by 3.
# answer[index] == "Buzz" if index is divisible by 5.
# answer[index] == index (as a string) if none of the above conditions are true.

# Accepted

from typing import List


class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans = []
        for i in range(1, n + 1):
            if i % 15 == 0:
                ans.append("FizzBuzz")
            elif i % 5 == 0:
                ans.append("Buzz")
            elif i % 3 == 0:
                ans.append("Fizz")
            else:
                ans.append(str(i))
        return ans


s = Solution()
print(s.fizzBuzz(15))
