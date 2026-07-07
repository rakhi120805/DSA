1class Solution(object):
2    def containsDuplicate(self, nums):
3        hashset=set()
4        for i in nums:
5            if i in hashset:
6                return True
7
8            hashset.add(i)
9        return False
10        """
11        :type nums: List[int]
12        :rtype: bool
13        """
14        