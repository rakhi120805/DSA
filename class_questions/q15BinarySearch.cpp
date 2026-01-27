#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    

    while(low<=high){
        int mid=(low+(high-low))/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            high=mid - 1;
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=search(arr,m);
    cout<<ans;
}