#include<bits/stdc++.h>
using namespace std;

pair<int,int> floorandceil(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int floor=-1;
    int ceil=-1;
    while(low<=high){
        int mid=low+(high - low);
        if(arr[mid]==target){
            floor=arr[mid];
            ceil=arr[mid];
        }
        else if(arr[mid]>target){
            ceil=arr[mid];
            high=mid-1;
        }
        else{
            floor=arr[mid];
            low=mid + 1;
        }
    }
    return {floor,ceil};
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int,int>ans;
    int target;
    cin>>target;
    ans=floorandceil(arr,target);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}