"""
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.
"""

# Accepted

from typing import List


class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        s = sorted(nums)
        map = {}
        for i in range(0, len(s)):
            if s[i] not in map:
                map[s[i]] = i
        for i in range(0, len(nums)):
            ans.append(map[nums[i]])
        return ans

