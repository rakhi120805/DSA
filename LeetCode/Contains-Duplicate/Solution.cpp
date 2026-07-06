1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4     unordered_set<int> s;
5for (int num : nums) {
6    if (s.count(num)) return true;
7    s.insert(num);
8}
9return false;
10
11    }
12};