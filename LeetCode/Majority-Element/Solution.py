1class Solution:
2    def majorityElement(self, nums: list[int]) -> int:
3        el=nums[0]
4        cnt=1
5        for i in range(1,len(nums)):
6            if cnt==0:
7                el=nums[i]
8                cnt+=1
9            elif nums[i]==el:
10                cnt+=1
11            else:
12                cnt-=1
13        
14        if cnt==0:
15            return -1
16        else:
17            return el
18
19        