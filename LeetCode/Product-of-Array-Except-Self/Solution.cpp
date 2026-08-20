1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int>prefix(n,1);
6        vector<int>postfix(n,1);
7        int p1=nums[0];
8        for(int i=1;i<n;i++){
9            prefix[i]=p1;
10            p1*=nums[i];
11        }
12        int p2=nums[n-1];
13        for(int i=n-2;i>=0;i--){
14            postfix[i]=p2;
15            p2*=nums[i];
16        }
17        vector<int>ans;
18        for(int i=0;i<n;i++){
19            ans.push_back(prefix[i]*postfix[i]);
20        }
21        return ans;
22    }
23};