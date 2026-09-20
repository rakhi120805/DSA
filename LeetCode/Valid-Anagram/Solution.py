1class Solution(object):
2    def isAnagram(self, s, t):
3        # if len(s)!=len(t):
4        #     return False
5        # countS,countT={},{}
6        # for i in range (len(s)):
7        #     countS[s[i]]=1+ countS.get(s[i],0)
8        #     countT[t[i]]=1+ countT.get(t[i],0)
9        # for c in countS:
10        #     if countS[c]!=countT.get(c,0):
11        #         return False
12
13        # return True
14        """
15        :type s: str
16        :type t: str
17        :rtype: bool
18        """
19        # s1="".join(sorted(s))
20        # t1="".join(sorted(t))
21        # if s1==t1:
22        #     return True
23        
24        # return False
25
26
27        if len(s)!=len(t):
28            return False
29        mpp1,mpp2={},{}
30        for i in range(len(s)):
31            mpp1[s[i]]=mpp1.get(s[i],0)+1
32            mpp2[t[i]]=mpp2.get(t[i],0)+1
33        for c in mpp1:
34            if mpp1[c]!=mpp2.get(c,0):
35                return False
36            
37        return True
38        