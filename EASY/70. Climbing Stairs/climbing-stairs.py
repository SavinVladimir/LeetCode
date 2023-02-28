# You are climbing a staircase. It takes n steps to reach the top.
# Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

# Accepted

# Advise Don`t use lru_cache as a memory

class Solution:
    def climbStairs(self, n: int) -> int:
        memo = {}
        if n <= 2:
            return n
        if n == 0:
            return 1
        if n < 0:
            return 0

        if n not in memo:
            memo[n] = self.climbStairs(n - 1) + self.climbStairs(n - 2)
        return memo[n]


s = Solution()
print(s.climbStairs(12))
