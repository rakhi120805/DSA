1class Solution(object):
2    def largestOddNumber(self, num):
3        """
4        :type num: str
5        :rtype: str
6        """
7        for i in range(len(num)-1,-1,-1):
8            if int(num[i])%2!=0:
9                return num[:i+1]
10        
11        return ""
12        