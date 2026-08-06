1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string ans;
5        for(int i=0;i<strs[0].size();i++){
6            for(int j=1;j<strs.size();j++){
7                if(i>=strs[j].size() || strs[j][i]!=strs[0][i]){
8                    return ans;
9                }
10            }
11            ans+=strs[0][i];
12        }
13        return ans;
14    }
15};