1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4     int n=nums.size();
5     vector<int>ans(n,1);
6     int p1=nums[0];
7     for(int i=1;i<n;i++){
8        ans[i]=p1;
9        p1*=nums[i];
10     }   
11     int p2=nums[n-1];
12     for(int i=n-2;i>=0;i--){
13        ans[i]*=p2;
14        p2*=nums[i];
15     }
16     return ans;
17    }
18};