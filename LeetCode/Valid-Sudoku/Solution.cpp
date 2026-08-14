1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_set<char>> rows(9);
5        vector<unordered_set<char>> cols(9);
6        vector<unordered_set<char>> boxes(9);
7
8        for (int i = 0; i < 9; i++) {
9
10            for (int j = 0; j < 9; j++) {
11
12                if (board[i][j] == '.')
13                    continue;
14
15                char num = board[i][j];
16
17                // Find the 3x3 box
18                int box = (i / 3) * 3 + (j / 3);
19
20                // Check duplicate
21                if (rows[i].count(num) ||
22                    cols[j].count(num) ||
23                    boxes[box].count(num)) {
24                    return false;
25                }
26
27                // Insert number
28                rows[i].insert(num);
29                cols[j].insert(num);
30                boxes[box].insert(num);
31            }
32        }
33
34        return true;
35    }
36};