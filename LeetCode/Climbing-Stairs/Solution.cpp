1class Solution {
2public:
3    int climbStairs(int n) {
4        int one=1;
5        int two=1;
6
7        for(int i=0;i<n-1;i++){
8            int temp=one;
9            one=one+two;
10            two=temp;
11        }
12        return one;
13    }
14};