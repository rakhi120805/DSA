1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int cnt=0;
5        int product=1;
6        int n=nums.size();
7        vector<int>ans(n,0);
8        for(int i=0;i<nums.size();i++){
9            if(nums[i]==0){
10                cnt++;
11            }
12            else{
13                product*=nums[i];
14            }
15        }
16        cout<<product;
17        if(cnt>1)return ans;
18
19        for(int i=0;i<n;i++){
20            if(nums[i]==0){
21                ans[i]=product;
22            }
23            else if(cnt==1 && nums[i]!=0)ans[i]=0;
24            else ans[i]=(product/nums[i]);
25
26        }
27        return ans;
28    }
29};