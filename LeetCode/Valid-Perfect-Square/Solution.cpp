1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4         long long low = 1;
5        long long high = num;
6
7        while (low <= high) {
8
9            long long mid = low + (high - low) / 2;
10            long long sq = mid * mid;
11
12            if (sq == num)
13                return true;
14
15            else if (sq < num)
16                low = mid + 1;
17
18            else
19                high = mid - 1;
20        }
21
22        return false;
23    }
24};