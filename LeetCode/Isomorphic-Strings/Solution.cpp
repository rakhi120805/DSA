1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char,char>st1;
5        unordered_map<char,char>st2;
6        for(int i=0;i<s.size();i++){
7            char c1=s[i];
8            char c2=t[i];
9            if((st1.find(c1)!=st1.end() && st1[c1]!=c2) || (st2.find(c2)!=st2.end() && st2[c2]!=c1)) return false;
10            st1[c1]=c2;
11            st2[c2]=c1;
12        }
13        return true;
14    }
15};