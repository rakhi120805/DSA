class Solution {
public:
    bool isPossible(vector<int>&arr,int capacity,int days){
        int count=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            
            if(sum>=capacity){
                count++;
                sum=0;
            }
            sum=sum+arr[i];
        }
        if(count>=days){
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        // int n=weights.size();
        int max_sum=0;
        for(auto it:weights){
            max_sum=max_sum+it;
        }
        int maxi=*max_element(weights.begin(),weights.end());
        int low=maxi;
        int high=max_sum;
        int ans=0;
        while(low<=high){
            int mid=low + (high - low)/2;
            if(isPossible(weights,mid,days)){
                    ans=mid;
                    high=mid - 1;
            }
            else {
                high=mid-1;
            }
        }
        return ans;
    }
};