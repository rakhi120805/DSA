1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector<int>hash(26);
5        for(int i=0;i<s.length();i++){
6            int ch=s[i] - 'a';
7            hash[ch]++;
8        }
9        for(int i=0;i<t.length();i++){
10            int ch=t[i]-'a';
11            hash[ch]--;
12        }
13        for(auto it:hash){
14            if(it!=0)return false;
15        }
16return true;
17        
18    }
19};