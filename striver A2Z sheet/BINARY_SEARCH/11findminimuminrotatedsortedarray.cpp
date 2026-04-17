#include<bits/stdc++.h>
using namespace std;

int minimum(vector<int>&arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int mini=INT_MAX;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(arr[mid]>=arr[low] ){
            mini=min(mini,arr[low]);
            low=mid+1;
        }
        else{
            mini=min(mini,arr[mid]);
            high=mid-1;
        }
    }
    return mini;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=minimum(arr);
    cout<<ans;
}