class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int x=nums.size();
        map<long,long>mpp;
        for(int i=0;i<x;i++){
            mpp[nums[i]]++;
        }

        for(int i=0;i<x;i++){
            if(mpp[nums[i]]>(x / 2)){
                return nums[i];
            }
        }
        return -1;
    }
};
