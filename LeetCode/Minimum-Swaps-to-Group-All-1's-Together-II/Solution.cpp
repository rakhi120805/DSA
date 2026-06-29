1class Solution {
2public:
3    int minSwaps(vector<int>& nums) {
4        int k=0;
5        int mini=INT_MAX;
6        int n=nums.size();
7        for(auto it:nums){
8            if(it==1)k++;
9        }
10        if(n==1 || k==0 || k==n){
11            return mini=0;
12        }
13
14        int left=0;
15        int right=left;
16        int cnt=0;
17        while(left<n){
18            
19            
20            if((right - left + n)%n>=k){
21                if(nums[left]==0)cnt--;
22                left++;
23            }
24            while((right - left + n)%n<k){
25                if(nums[right]==0)cnt++;
26                right=(right + 1)%n;
27            }
28            mini=min(mini,cnt);
29            // right++;
30        }
31        return mini;
32    }
33};