#include<bits/stdc++.h>
using namespace std;

int index(vector<int>&arr){
    int n=arr.size();
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e){
        int mid=s + (e - s)/2;
        if(arr[mid]<=arr[e]){
            ans=mid;
            e=mid - 1;
        }
        else{
            s=mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=index(arr);
    cout<<ans;
}