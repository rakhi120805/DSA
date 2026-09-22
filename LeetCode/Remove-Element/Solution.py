1class Solution(object):
2    def swap(self,nums,a,b):
3        temp=nums[a]
4        nums[a]=nums[b]
5        nums[b]=temp
6    def removeElement(self, nums, val):
7        """
8        :type nums: List[int]
9        :type val: int
10        :rtype: int
11        """
12        k=0
13        for i in range(0,len(nums)):
14            if nums[i]!=val:
15                self.swap(nums,k,i)
16                k+=1
17        
18        return k