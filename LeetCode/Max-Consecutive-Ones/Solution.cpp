1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxi=0;
5        int cnt=0;
6        for(int i:nums){
7            if(i ==1){
8                cnt++;
9                maxi=max(maxi,cnt);
10            }
11            else{
12                cnt=0;
13            }
14        }
15        return maxi;
16    
17    
18    
19    //     int maxCount = 0, currentCount = 0;
20
21    // for (int num : nums) {
22    //     if (num == 1) {
23    //         currentCount++;
24    //         maxCount = max(maxCount, currentCount);
25    //     } else {
26    //         currentCount = 0;
27    //     }
28    // }
29
30    // return maxCount;
31    }
32};