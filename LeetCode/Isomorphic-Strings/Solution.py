1class Solution(object):
2    def isIsomorphic(self, s, t):
3        """
4        :type s: str
5        :type t: str
6        :rtype: bool
7        """
8        map1,map2={},{}
9
10        for i in range(len(s)):
11            c1=s[i]
12            c2=t[i]
13            if((c1 in map1 and map1[c1]!=c2) or (c2 in map2 and map2[c2]!=c1)):
14                return False
15            
16            map1[c1]=c2
17            map2[c2]=c1
18        
19        return True
20        