#include<bits/stdc++.h>
using namespace std;

int number(vector<int>&arr){
    unordered_map<int,int>mpp;
    int freq=1;
    int el=arr[0];
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
        if( mpp[arr[i]]>freq){
            el=arr[i];
            freq=mpp[arr[i]];
            
        }
    }
    return el;

    // vector<int>bit(32,0);
    // for(int i=0;i<arr.size();i++){
    //     int j=31;
    //     int x=1;
    //     while(j>=0){
    //         int ans=arr[i] & x;
    //         if(ans != 0 ){
    //             bit[j]++;
    //         }
    //         x=x<<j;
    //         j--;
    //     }
    //     for(auto it:bit){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // }
    
    // return -1;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=number(arr);
    cout<<ans;
}