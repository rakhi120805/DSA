1class Solution(object):
2    def longestCommonPrefix(self, strs):
3        """
4        :type strs: List[str]
5        :rtype: str
6        """
7        # res=""
8        # for i in range(0,len(strs[0])):
9        #     for j in range(1,len(strs)):
10        #         if i>=len(strs[j]) or strs[j][i]!=strs[0][i]:
11        #             return res
12            
13        #     res+=strs[0][i]
14        
15        # return res
16        
17        res=""
18        for i in range(0,len(strs[0])):
19            for j in range(1,len(strs)):
20
21                if i>=len(strs[j]) or strs[j][i]!=strs[0][i]:
22                    return res
23        
24            res+=strs[0][i]
25        
26        return res