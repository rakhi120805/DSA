1class Solution(object):
2    def productExceptSelf(self, nums):
3        """
4        :type nums: List[int]
5        :rtype: List[int]
6        """
7        n=len(nums)
8        prefix=[1]*n
9        postfix=[1]*n
10
11        p1=nums[0]
12        p2=nums[-1]
13        for i in range(1,n):
14            prefix[i]=p1
15            p1*=nums[i]
16        
17        for i in range(n-2,0,-1):
18            postfix[i]=p2
19            p2*=nums[i]
20        postfix[0]=p2
21
22        ans=[]
23        for i in range(0,n):
24            ans.append(prefix[i]*postfix[i]) 
25        return ans
26        