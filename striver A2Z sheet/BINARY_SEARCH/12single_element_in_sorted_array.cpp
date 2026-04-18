
#include<bits/stdc++.h>
using namespace std;


int singleNonDuplicate(vector<int>& nums){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]!=nums[mid + 1] && nums[mid]!=nums[mid-1]){
            return nums[mid];
        }
        else if(mid%2==0){
            if(nums[mid]==nums[mid-1])high=mid-1;
            else low=mid+1;
        }
        else {
            if(nums[mid]==nums[mid+1])high=mid-1;
            else low=mid+1;
        }
    }
return 0;

} 
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=singleNonDuplicate(arr);
    cout<<ans;
}
