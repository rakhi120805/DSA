1class Solution(object):
2    def swap(self,s,a,b):
3            temp=s[a]
4            s[a]=s[b]
5            s[b]=temp
6    def reverseString(self, s):
7        """
8        :type s: List[str]
9        :rtype: None Do not return anything, modify s in-place instead.
10        """
11        
12        n=len(s)
13        i=0
14        j=n-1
15        while i<=j:
16            self.swap(s,i,j)
17            i+=1
18            j-=1
19
20        
21        return s
22        