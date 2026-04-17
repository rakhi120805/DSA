#include<bits/stdc++.h>
using namespace std;

int rotation(vector<int>&arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int index=0;
    int mini=INT_MAX;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(arr[mid]>=arr[low]){
            if(arr[low]<mini){
                mini=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            if(arr[mid]<mini){
                mini=arr[mid];
                index=mid;
            }
            
            high=mid-1;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=rotation(arr);
    cout<<ans;
}
