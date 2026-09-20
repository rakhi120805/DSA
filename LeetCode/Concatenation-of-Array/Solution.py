1class Solution(object):
2    def getConcatenation(self, nums):
3        """
4        :type nums: List[int]
5        :rtype: List[int]
6        """
7        ans=[]
8        for i in range(len(nums)):
9            ans.append(nums[i])
10        for i in range(len(nums)):
11            ans.append(nums[i])
12        return ans
13        