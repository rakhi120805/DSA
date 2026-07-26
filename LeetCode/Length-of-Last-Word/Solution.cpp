1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int end = s.length() - 1;
5        while (end >= 0 && s[end] == ' ') {
6            end--;
7        }
8
9        // Count characters of the last word
10        int length = 0;
11        while (end >= 0 && s[end] != ' ') {
12            length++;
13            end--;
14        }
15
16        return length;
17    }
18};