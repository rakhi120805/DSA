1class Solution(object):
2    def maxProfit(self, prices):
3        """
4        :type prices: List[int]
5        :rtype: int
6        """
7        mini=prices[0]
8        profit=0
9        maxi=-1
10        for i in range(1,len(prices)):
11            mini=min(mini,prices[i])
12            profit=prices[i]-mini
13            maxi=max(profit,maxi)
14        if maxi==-1:
15            return 0
16        return maxi
17        