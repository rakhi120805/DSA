1class Solution(object):
2    def getConcatenation(self, nums):
3        ans=[]
4        for i in range(2):
5            for n in nums:
6                ans.append(n)
7        return ans
8        """
9        :type nums: List[int]
10        :rtype: List[int]
11        """
12        