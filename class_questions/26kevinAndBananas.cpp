#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int>&arr,int target,int marker){
    int he_is_eating=0;
    int remaining_bananas;
    for(int i=0;i<arr.size();i++){
        remaining_bananas=arr[i] - marker;
        if(marker>arr[i]){
            remaining_bananas=0;
        }
        
        he_is_eating=he_is_eating+remaining_bananas;
    }
    if(he_is_eating>=target){
        return true;
    }
    return false;

}

int maximumMarker(vector<int>&nums,int target){
    int low=0;
    int high=*max_element(nums.begin(),nums.end());
    int ans=INT_MIN;
    while(low<=high){
        int mid=low + (high - low)/2;
        if(isValid(nums,target,mid)){
            ans=mid;
            low=mid +1;
        }
        else{
            high=mid - 1;
        }
    }
    return ans;


}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>buckets(n);
    for(int i=0;i<n;i++){
        cin>>buckets[i];
    }
    int ans=maximumMarker(buckets,m);
    cout<<ans;
}