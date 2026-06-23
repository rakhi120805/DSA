1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4       int sum=0;
5       vector<int>v;
6       int n=nums.size();
7       for(int i=0;i<n;i++){
8        sum+=nums[i];
9        v.push_back(sum);
10       } 
11       return v;
12    }
13};