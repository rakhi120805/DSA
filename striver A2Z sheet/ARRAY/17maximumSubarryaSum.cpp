#include<bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int>&arr){
    // BRUTE FORCE
    // int max_sum=0;
    // for(int i=0;i<arr.size();i++){
    //     for(int j=i;j<arr.size();j++){
    //         int sum=0;
    //         for(int k=i;k<j;k++){
    //             sum=sum + arr[k];
    //         }
    //         max_sum=max(sum,max_sum);
    //     }
    // }
    // return max_sum;

    // BETTER APPROACH

    // int max_sum=0;
    // for(int i=0;i<arr.size();i++){
    //     int sum=0;
    //     for(int j=i;j<arr.size();j++){
    //         sum=sum + arr[j];
    //         max_sum=max(sum,max_sum);
    //     }
    // }
    // return max_sum;

    // OPTIMAL APPROACH

    // int sum=0;
    // int max_sum=INT_MIN;
    // for(int i=0;i<arr.size();i++){
    //     sum=sum + arr[i];
    //     if(sum > max_sum){
    //         max_sum=sum;
    //     }
    //     if(sum<0){
    //         sum=0;
    //     }
    // }
    // return max_sum;

    // IF I WANT TO PRINT THE WHOLE SUBARRAY

     int sum=0;
    int max_sum=INT_MIN;
    int start=0;
    int ans_start=0;
    int ans_end=0;
    for(int i=0;i<arr.size();i++){
        if(sum == 0){
            start=i;
        }
        sum=sum + arr[i];
        if(sum > max_sum){
            max_sum=sum;
            ans_start=start;
            ans_end=i;

        }
        if(sum<0){
            sum=0;
        }
    }
    for(int i=ans_start;i<=ans_end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maximumSubarraySum(arr);
    cout<<ans;
    return 0;
}