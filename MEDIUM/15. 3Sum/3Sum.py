"""
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k,
and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
"""

from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans: List[List[int]] = []

        if len(nums) < 3:
            return ans

        nums.sort()

        if nums[0] > 0:
            return ans

        for i in range(0, len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            l = i + 1
            r = len(nums) - 1

            while l < r:
                s = nums[i] + nums[l] + nums[r]
                if s < 0:
                    l += 1
                if s > 0:
                    r -= 1
                if s == 0:
                    ans.append([nums[i], nums[l], nums[r]])
                    next_l = nums[l]
                    next_r = nums[r]
                    while l < r and nums[l] == next_l:
                        l += 1
                    while l < r and nums[r] == next_r:
                        r -= 1

        return ans


s = Solution()
print(s.threeSum([-1, 0, 1, 2, -1, -4]))
