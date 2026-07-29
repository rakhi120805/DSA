1class Solution {
2public:
3    int myAtoi(string s) {
4        int i = 0;
5        int n = s.size();
6
7        // Skip leading spaces
8        while (i < n && s[i] == ' ') {
9            i++;
10        }
11
12        // Check sign
13        int sign = 1;
14        if (i < n && (s[i] == '+' || s[i] == '-')) {
15            if (s[i] == '-') sign = -1;
16            i++;
17        }
18
19        long long ans = 0;
20
21        // Read digits
22        while (i < n && isdigit(s[i])) {
23            int digit = s[i] - '0';
24
25            // Check overflow before adding the digit
26            if (ans > (INT_MAX - digit) / 10) {
27                return (sign == 1) ? INT_MAX : INT_MIN;
28            }
29
30            ans = ans * 10 + digit;
31            i++;
32        }
33
34        return sign * ans;
35    }
36};