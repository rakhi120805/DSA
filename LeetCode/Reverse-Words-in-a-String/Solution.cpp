1class Solution {
2public:
3    string reverseWords(string s) {
4       stringstream ss(s);
5       string token="";
6       string ans="";
7        while(ss>>token){
8            ans=token+' '+ans;
9        }
10        return ans.substr(0,ans.length()-1);
11    }
12};