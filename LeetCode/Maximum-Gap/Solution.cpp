1class Solution {
2public:
3    int maximumGap(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int maxi=INT_MIN;
6        if(nums.size()==1)return 0;
7        for(int i=1;i<nums.size();i++){
8            int diff=nums[i]-nums[i- 1];
9            maxi=max(maxi,diff);
10        }
11        return maxi;
12        
13    }
14};