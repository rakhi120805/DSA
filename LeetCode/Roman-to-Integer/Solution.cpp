1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int> mp = {
5            {'I',1},
6            {'V',5},
7            {'X',10},
8            {'L',50},
9            {'C',100},
10            {'D',500},
11            {'M',1000}
12        };
13
14        int ans = 0;
15
16        for(int i = 0; i < s.size(); i++) {
17
18            if(i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]) {
19                ans -= mp[s[i]];
20            }
21            else {
22                ans += mp[s[i]];
23            }
24        }
25
26        return ans;
27    }
28};