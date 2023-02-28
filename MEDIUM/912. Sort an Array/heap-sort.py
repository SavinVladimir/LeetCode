"""
Given an array of integers nums, sort the array in ascending order and return it.
You must solve the problem without using any built-in functions in O(nlog(n))
time complexity and with the smallest space complexity possible.
"""

# ACCEPTED

from typing import List


class Heap:
    def __init__(self):
        self.heap = []
        self.size = -1

    def siftUp(self, index):
        while index > 0:
            parent = (index - 1) // 2
            if self.heap[parent] <= self.heap[index]:
                break
            self.heap[parent], self.heap[index] = self.heap[index], self.heap[parent]
            index = parent

    def siftDown(self, index):
        while 2 * index + 1 < self.size:
            left = 2 * index + 1
            right = 2 * index + 2
            j = left
            if right < self.size and self.heap[right] < self.heap[left]:
                j = right
            if self.heap[index] <= self.heap[j]:
                break
            self.heap[index], self.heap[j] = self.heap[j], self.heap[index]
            index = j

    def insert(self, k):
        self.heap.append(k)
        self.size += 1
        self.siftUp(self.size)

    def extract(self):
        if self.size > 0:
            self.heap[0] = self.heap[self.size]
            self.siftDown(0)
        del self.heap[self.size]
        self.size -= 1

    def get_min(self):
        return self.heap[0]


class Solution:
    @staticmethod
    def sortArray(nums: List[int]) -> List[int]:
        heap = Heap()

        for el in nums:
            heap.insert(el)

        ans = []

        for i in range(len(nums)):
            ans.append(heap.get_min())
            heap.extract()
        return ans


print(Solution().sortArray([5, 1, 1, 2, 0, 0]))
