1class Solution {
2public:
3    string intToRoman(int num) {
4        vector<int> value = {
5            1000,900,500,400,
6            100,90,50,40,
7            10,9,5,4,1
8        };
9
10        vector<string> roman = {
11            "M","CM","D","CD",
12            "C","XC","L","XL",
13            "X","IX","V","IV","I"
14        };
15
16        string ans = "";
17
18        for(int i = 0; i < value.size(); i++) {
19
20            while(num >= value[i]) {
21                ans += roman[i];
22                num -= value[i];
23            }
24        }
25
26        return ans;
27    }
28};