#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(nums[mid]==target)return true;
        else if(nums[mid]==nums[low] && nums[mid]==nums[high]){
            high--;
            low++;
        }
        else if(nums[low]<=nums[mid]){
            if(nums[low]<=target && nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[high]>=target && nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans=search(arr,target);
    cout<<ans;
}

