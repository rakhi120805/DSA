1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int cnt=1;
5        int el=nums[0];
6        int maxi=cnt;
7        for(int i=1;i<nums.size();i++){
8            if(nums[i]==el)cnt++;
9            else cnt--;
10            if(cnt==0)el=nums[i+1];
11            
12        }
13return el;
14    }
15};