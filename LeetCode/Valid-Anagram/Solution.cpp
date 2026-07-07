1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(),t.end());
6        if(s==t)return true;
7        return false;
8//         vector<int>hash(26);
9//         for(int i=0;i<s.length();i++){
10//             int ch=s[i] - 'a';
11//             hash[ch]++;
12//         }
13//         for(int i=0;i<t.length();i++){
14//             int ch=t[i]-'a';
15//             hash[ch]--;
16//         }
17//         for(auto it:hash){
18//             if(it!=0)return false;
19//         }
20// return true;
21        
22    }
23};