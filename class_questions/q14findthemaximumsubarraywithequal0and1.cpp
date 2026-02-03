#include<bits/stdc++.h>
using namespace std;

int max_subarray_count(vector<int>& arr){
    int n=arr.size();
      
    int max_subarray=0;
    int diff=0;
    int count0=0;
    int count1=1;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        if(arr[i] ==0){
            count0++;
        }
        else{
            count1++;
        }
        diff=count0-count1;
        if(diff == 0){
            max_subarray=i+1;
        }
        if(mpp.find(diff)!=mpp.end()){
            max_subarray=max(max_subarray,i - mpp[diff]);
        }
        if(mpp.find(diff) == mpp.end() ){
            mpp[diff]=i;
        }
    }

    -
    // for(int i=0;i<n;i++){

    //     for(int j=i;j<n;j++){
    //         int count0=0;
    //         int count1=0; 

    //         for(int k=i;k<j;k++){
    //             if(arr[k]==0){
    //                 count0++;
    //             }
    //             else{
    //                 count1++;
    //             }
    //         }
    //         int count=count0+count1;
    //         if(count%2==0){
    //             max_subarray=max(max_subarray,count);
    //         }
    //     }
    // }
    return max_subarray;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=max_subarray_count(arr);
    cout<<ans;
}