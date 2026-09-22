1class Solution(object):
2    def groupAnagrams(self, strs):
3        """
4        :type strs: List[str]
5        :rtype: List[List[str]]
6        """
7        res=defaultdict(list)
8        for s in strs:
9            count=[0]*26
10            for c in s:
11                count[ord(c) - ord("a")]+=1
12            
13            res[tuple(count)].append(s)
14        return res.values()
15        
16        