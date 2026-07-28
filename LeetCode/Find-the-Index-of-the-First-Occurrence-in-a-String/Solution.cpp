1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        
5        int n = haystack.size();
6        int m = needle.size();
7
8        if (m > n)
9            return -1;
10
11        for (int i = 0; i <= n - m; i++) {
12
13            int j = 0;
14
15            while (j < m && haystack[i + j] == needle[j])
16                j++;
17
18            if (j == m)
19                return i;
20        }
21
22        return -1;
23    }
24};