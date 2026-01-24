#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>&arr,int target){
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        
        int res=target - arr[i];
        if(mpp.find(res)!= mpp.end()){
            return {mpp[res],i};
        }
        if(mpp.find(res) == mpp.end()){
            mpp[arr[i]] = i;
        }
    }
    return {};

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans= pairSum(arr,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}