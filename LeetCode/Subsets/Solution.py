1class Solution(object):
2    def subsets(self, nums):
3        """
4        :type nums: List[int]
5        :rtype: List[List[int]]
6        """
7        res=[[]]
8        def dfs(i,curr):
9            if i==len(nums) or len(curr)==len(nums):
10                return
11            
12            curr.append(nums[i])
13            res.append(curr[:])
14            dfs(i+1,curr)
15            curr.pop()
16            dfs(i+1,curr)
17        
18        dfs(0,[])
19        return res
20
21            
22        