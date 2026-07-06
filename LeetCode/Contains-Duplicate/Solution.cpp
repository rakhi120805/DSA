1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int,int>mpp;
5        for(int i=0;i<nums.size();i++){
6            mpp[nums[i]]++;
7        }
8        for(auto it:mpp){
9            if(it.second >1)return true;
10        }
11        return false;
12
13    }
14};