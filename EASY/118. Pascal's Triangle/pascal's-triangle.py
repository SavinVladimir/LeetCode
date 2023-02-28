# Given an integer numRows, return the first numRows of Pascal's triangle.

# In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

# Accepted

from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        a = []
        for x in range(numRows + 1):
            a.append([1])
            if x > 1:
                for c in range(x - 1):
                    a[x].append(a[x - 1][c] + a[x - 1][c + 1])
            if x > 0:
                a[x].append(1)
        return a

s = Solution()

numRows = int(input())

a = s.generate(numRows)

print(a[numRows])


















