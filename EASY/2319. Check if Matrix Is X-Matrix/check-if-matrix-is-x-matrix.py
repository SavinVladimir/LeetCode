# A square matrix is said to be an X-Matrix if both of the following conditions hold:
#
# All the elements in the diagonals of the matrix are non-zero.
# All other elements are 0.
# Given a 2D integer array grid of size n x n representing a square matrix, return true if grid is an X-Matrix.

# Otherwise, return false.

from typing import List
class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        size = len(grid[0])
        for i in range(size):
            for j in range(size):
                if (i == j) or (i + j + 1 == size):
                    if grid[i][j] == 0:
                        return False
                else:
                    if grid[i][j] != 0:
                        return False
        return True
