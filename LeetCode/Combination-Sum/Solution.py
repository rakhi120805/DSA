1class Solution(object):
2    def combinationSum(self, candidates, target):
3        """
4        :type candidates: List[int]
5        :type target: int
6        :rtype: List[List[int]]
7        """
8        res=[]
9        def dfs(i,curr,total):
10            if total==target:
11                res.append(curr[:])
12                return
13            if i>=len(candidates) or total>target:
14                return
15            
16            curr.append(candidates[i])
17            dfs(i,curr,total+candidates[i])
18            curr.pop()
19            dfs(i+1,curr,total)
20        
21        dfs(0,[],0)
22        return res
23
24        