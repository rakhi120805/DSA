#include<bits/stdc++.h>
using namespace std;

int greaterThanGivenElement(vector<int>&arr,int element){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int gn=arr[n - 1];
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]==element){
            return arr[mid + 1];
        }
        else if(arr[mid]>element){
            high=mid - 1;
            gn=arr[mid];
        }
        else{
            low=mid + 1;
            if(arr[mid]<arr[mid + 1]){
                gn=arr[mid + 1];
            }
        }
    }
    return gn;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=greaterThanGivenElement(arr,m);
    cout<<ans;
}