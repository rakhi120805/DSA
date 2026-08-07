1class Solution(object):
2    def longestCommonPrefix(self, strs):
3        """
4        :type strs: List[str]
5        :rtype: str
6        """
7        res=""
8        for i in range(0,len(strs[0])):
9            for j in range(1,len(strs)):
10                if i>=len(strs[j]) or strs[j][i]!=strs[0][i]:
11                    return res
12            
13            res+=strs[0][i]
14        
15        return res
16        