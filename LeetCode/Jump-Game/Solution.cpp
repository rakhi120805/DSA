1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int n=nums.size();
5
6        if(nums.size()==1 || nums.empty())
7            return true;
8
9        int maxi=0;
10        
11        // for(int i=0;i<n;i++){
12        //     maxi=max(maxi,nums[i]+i);
13        //     if(maxi == n-1)
14        //         return true;
15        //     if( i == maxi)
16        //         return false;
17        // }
18
19        for(int i=0;i<n;i++){
20            if(i>maxi)
21                return false;
22            maxi=max(maxi,nums[i]+i);
23        }
24        return true;
25    }
26};