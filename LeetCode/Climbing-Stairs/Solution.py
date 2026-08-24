1class Solution(object):
2    def climbStairs(self, n):
3        """
4        :type n: int
5        :rtype: int
6        """
7        o=1
8        t=1
9        for i in range(n-1):
10            tm=o 
11            o=o+t
12            t=tm
13        return o