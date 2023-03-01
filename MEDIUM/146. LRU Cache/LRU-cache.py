# Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

# Implement the LRUCache class:

# LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
# int get(int key) Return the value of the key if the key exists, otherwise return -1.
# void put(int key, int value) Update the value of the key if the key exists.
# Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation,
# evict the least recently used key.
# The functions get and put must each run in O(1) average time complexity.

# Accepted

from collections import OrderedDict


class LRUCache:
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.d = OrderedDict()

    def get(self, key: int) -> int:
        if key in self.d:
            self.d.move_to_end(key)
        return self.d.get(key, -1)

    def put(self, key: int, value: int) -> None:
        if key in self.d:
            self.d[key] = value
            self.d.move_to_end(key)
        else:
            if len(self.d) < self.capacity:
                self.d[key] = value
            else:
                self.d.popitem(False)
                self.d[key] = value

    def __repr__(self):
        return str(self.d)
