# Given an array of integers nums and an integer target, return indices of the two
# numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# Accepted

from typing import List


class Solution:
    @staticmethod
    def two_sum(nums: List[int], target: int) -> List[int]:
        values = {}
        for index, element in enumerate(nums):
            diff = target - element
            if diff in values:
                return [index, values[diff]]
            values[element] = index
        return []


print(Solution().two_sum([3, 2, 4], 6))