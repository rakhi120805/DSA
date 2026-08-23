1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int xor1 = 0;
5        for(int i=0;i<nums.size();i++){
6            xor1 = xor1 ^nums[i];
7        }
8        return xor1;
9    }
10};