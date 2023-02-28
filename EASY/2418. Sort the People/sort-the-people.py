# You are given an array of strings names, and an array heights that consists of distinct positive integers.
# Both arrays are of length n.

# For each index i, names[i] and heights[i] denote the name and height of the ith person.

# Return names sorted in descending order by the people's heights.

# Accepted

from typing import List
from operator import itemgetter


class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        return list(el[0] for el in sorted(list(zip(names, heights)), key=itemgetter(1), reverse=True))


print(Solution().sortPeople(names=["Mary", "John", "Emma"], heights=[180, 165, 170]))
