#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr,int i){
    int n=arr.size();
    if(i == n -1){
        return true;
    }

    if(arr[i]>arr[i + 1])return false;

    return true && isSorted(arr,i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=isSorted(arr,0);
    cout<<ans;
}