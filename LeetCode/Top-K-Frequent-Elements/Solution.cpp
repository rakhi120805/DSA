1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4
5        unordered_map<int, int> mp;
6
7        // Count frequency
8        for (int x : nums) {
9            mp[x]++;
10        }
11
12        // bucket[i] contains elements appearing i times
13        vector<vector<int>> bucket(nums.size() + 1);
14
15        for (auto it : mp) {
16            bucket[it.second].push_back(it.first);
17        }
18
19        vector<int> ans;
20
21        // Start from highest frequency
22        for (int i = nums.size(); i >= 1; i--) {
23
24            for (int x : bucket[i]) {
25
26                ans.push_back(x);
27
28                if (ans.size() == k)
29                    return ans;
30            }
31        }
32
33        return ans;
34    }
35};