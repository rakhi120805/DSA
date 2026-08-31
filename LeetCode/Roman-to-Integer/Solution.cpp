1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char,int>mpp{
5            {'I',1},
6            {'V',5},
7            {'X',10},
8            {'L',50},
9            {'C',100},
10            {'D',500},
11            {'M',1000}
12        };
13        int number=0;
14        int i=0;
15        while(i<s.size()){
16          
17            if(mpp[s[i]]< mpp[s[i+1]]){
18                number+=mpp[s[i+1]]-mpp[s[i]];
19                i=i+2;
20            }
21            else{
22                number+=mpp[s[i]];
23                i++;
24            }
25        }
26
27return number;
28    }
29};