1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        // As it wants indexes so i will use hasing technique
5
6        map<int,int>mpp;
7        int n=nums.size();
8        for(int i=0;i<n;i++){
9
10            int rem=target - nums[i];
11            if(mpp.find(rem)!= mpp.end()){
12                return {mpp[rem],i};
13            }
14            mpp[nums[i]]=i;   
15
16        }
17        return {};
18
19       
20    }
21};