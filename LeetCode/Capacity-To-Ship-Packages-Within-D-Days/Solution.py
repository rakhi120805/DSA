1class Solution(object):
2    def isPossible(self,weights,days,w):
3        day=1
4        weight=weights[0]
5        for i in range(1,len(weights)):
6            weight+=weights[i]
7            if weight>w:
8                weight=weights[i]
9                day+=1
10        
11        if day>days:
12            return False
13        return True
14
15
16
17
18
19    def shipWithinDays(self, weights, days):
20        """
21        :type weights: List[int]
22        :type days: int
23        :rtype: int
24        """
25        low=max(weights)
26        high=sum(weights)
27        ans=0
28        while low<=high:
29            mid=low + (high - low)//2
30            if self.isPossible(weights,days,mid):
31                ans=mid
32                high=mid-1
33            else:
34                low=mid+1
35        return ans
36
37        