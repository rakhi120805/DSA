1class Solution(object):
2    def isAnagram(self, s, t):
3        if len(s)!=len(t):
4            return False
5        countS,countT={},{}
6        for i in range (len(s)):
7            countS[s[i]]=1+ countS.get(s[i],0)
8            countT[t[i]]=1+ countT.get(t[i],0)
9        for c in countS:
10            if countS[c]!=countT.get(c,0):
11                return False
12
13        return True
14        """
15        :type s: str
16        :type t: str
17        :rtype: bool
18        """
19        