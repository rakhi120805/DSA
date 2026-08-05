1class Solution {
2public:
3    void solve(vector<int>& nums,
4               vector<int>& temp,
5               vector<vector<int>>& ans,
6               vector<bool>& vis) {
7
8        if (temp.size() == nums.size()) {
9            ans.push_back(temp);
10            return;
11        }
12
13        for (int i = 0; i < nums.size(); i++) {
14
15            if (vis[i]) continue;
16
17            vis[i] = true;
18            temp.push_back(nums[i]);
19
20            solve(nums, temp, ans, vis);
21
22            temp.pop_back();
23            vis[i] = false;
24        }
25    }
26
27    vector<vector<int>> permute(vector<int>& nums) {
28
29        vector<vector<int>> ans;
30        vector<int> temp;
31        vector<bool> vis(nums.size(), false);
32
33        solve(nums, temp, ans, vis);
34
35        return ans;
36        
37    }
38};