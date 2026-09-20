1class Solution(object):
2    def containsDuplicate(self, nums):
3        # hashset=set()
4        # for i in nums:
5        #     if i in hashset:
6        #         return True
7
8        #     hashset.add(i)
9        # return False
10        """
11        :type nums: List[int]
12        :rtype: bool
13        """
14        hashset={}
15        for i in range(len(nums)):
16            hashset[nums[i]]=hashset.get(nums[i],0)+1
17        
18        for key in hashset:
19            if hashset[key]>1:
20                return True
21        
22        return False
23
24
25
26
27
28
29
30
31        