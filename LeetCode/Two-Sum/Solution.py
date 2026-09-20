1class Solution(object):
2    def twoSum(self, nums, target):
3        """
4        :type nums: List[int]
5        :type target: int
6        :rtype: List[int]
7        """
8        # ans=[]
9        # n=len(nums)
10        # for i in range(0,n-1):
11        #     sum=0
12        #     for j in range(i+1,n):
13        #         sum=nums[i] + nums[j]
14        #         if sum==target:
15        #             ans.append(i)
16        #             ans.append(j)
17        #             return ans
18        # return -1
19        
20
21        ans=[]
22        mpp={}
23        sum=0
24        for i in range(len(nums)):
25            sum=sum+nums[i]
26            rem=target - nums[i]
27            if rem in mpp:
28                ans.append(mpp[rem])
29                ans.append(i)
30                return ans
31            mpp[nums[i]]=i
32        return -1
33           