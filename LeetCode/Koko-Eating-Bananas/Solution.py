1
2class Solution(object):
3    def isPossible(self,piles,h,kela):
4        total_time=0
5        for i in range(len(piles)):
6            time=(piles[i] + kela -1)//kela
7            total_time+=time
8        
9        if total_time>h:
10            return False
11        return True
12    def minEatingSpeed(self, piles, h):
13        """
14        :type piles: List[int]
15        :type h: int
16        :rtype: int
17        """
18        ans=0
19        low=1
20        high=max(piles)
21        while low<=high:
22            mid=low + (high - low)/2
23            if self.isPossible(piles,h,mid):
24                ans=mid
25                high=mid-1
26            else:
27                low=mid+1
28        
29        return ans
30
31        