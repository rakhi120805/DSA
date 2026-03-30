#include<bits/stdc++.h>
using namespace std;

int largestsum(vector<int>&arr){
    int n=arr.size();
    int sum=0;
    int maxi=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=max(maxi,i+1);
        }
        if(mpp.find(sum)!=mpp.end()){
            int len=i-mpp[sum];
            maxi=max(maxi,len);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }

    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=largestsum(arr);
    cout<<ans;
    return 0;
    
}