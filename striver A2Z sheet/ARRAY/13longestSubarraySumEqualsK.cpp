#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>arr,int m){
    // BRUTE FORCE 
    // int maxi=0;

    // for(int i = 0;i<arr.size();i++){
    //     for(int j=i;j<arr.size();j++){
    //         int sum=0;
    //         for(int k =i;k<=j;k++){
    //             sum=sum+arr[k];
    //         }
    //         if(sum == m){
    //                 maxi=max(maxi,j -i +1);
    //             }
    //     }
    // }
    // return maxi;


    // BETTER APPROCH(HASHING)
    // int max_length=0;
    // int sum=0;
    // map<int,int>mpp;
    // for(int i=0;i<arr.size();i++){
    //     sum =sum + arr[i];
    //     if(sum == m){
    //         max_length=max(max_length, i + 1);
    //     }
    //     int rem=sum - m;
    //     if(mpp.find(rem)!=mpp.end()){
    //         int len=i - mpp[rem];
    //         max_length=max(max_length,len);
    //     } 
    //     if(mpp.find(rem) == mpp.end()){
    //         mpp[sum] = i;
    //     }
    // }
    // return max_length;


    // OPTIMAL APPROACH(2 POINTER OR SLIDING WINDOW)
    
    int max_length=0;
    int sum=arr[0];
    int left=0,right=0;
    int n=arr.size();
    while(right<n){
        while(left<=right && sum>m){
            sum=sum - arr[left];
            left++;
        }
        if(sum==m){
            max_length=max(max_length,right - left + 1);
        }
        right++;
        if(right<n){
            sum=sum + arr[right];
        }
    }
    return max_length;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=longestSubarray(arr,m);
    cout<<ans;
    return 0;

}