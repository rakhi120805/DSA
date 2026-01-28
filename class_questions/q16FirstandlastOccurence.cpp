#include <bits/stdc++.h>
using namespace std;
vector<int> occurences(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int low1=0;
    int high1=n-1;
    int first_occurence=-1;
    int last_occurence=-1;

    while(low<=high){
        int mid=low+(high - low)/2;
        if(arr[mid] == target){
            first_occurence=mid;
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid - 1;
        }
    }
        while(low1<=high1){
        int mid=low1+(high1 - low1)/2;
        if(arr[mid] == target){
            last_occurence=mid;
            low1=mid+1;
        }
        else if(arr[mid]<target){
            low1=mid+1;
        }
        else{
            high1=mid - 1;
        }
    }
    return {first_occurence,last_occurence};
    
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=occurences(arr,m);
    for(auto it : ans){
        cout<<it<<" ";
    }
}