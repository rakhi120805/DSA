#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr,int target){
    // BRUTE FORCE

    // for(int i=0;i<arr.size();i++){
    //     for(int j=i + 1;j<arr.size();j++){
    //         if(arr[i]+arr[j] == target){
    //             return {i,j};
    //         }
    //     }
    // }
    // return {};

    // BETTER APPROACH (HASHMAP)

    // map<int,int>mpp;
    // for(int i=0;i<arr.size();i++){
    //     int a=arr[i];
    //     int rem=target - a;
    //     if(mpp.find(rem)!=mpp.end()){
    //         return {i,mpp[rem]};
    //     }
    //     if(mpp.find(rem)==mpp.end()){
    //         mpp[a]=i;
    //     }
    // }
    // return {};

    // OPTIMAL APPROACH(2 POINTER)
    // IF WE WANT TO FIND THE INDEXES SO WE CAN'T USE THIS AS IT'S FIRST SORTING THE ARRAY
    // SO EVENTUALLY THE INDEXES WILL CHANGE AND IT WILL GIVE THE WRONG OUTPUT
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int i=0;
    int j=n-1;
    

    while(i<j){
        int sum=arr[i] + arr[j];
        if(sum == target){
            return {arr[i],arr[j]};
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
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

    vector<int> ans=twoSum(arr,m);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;

}