#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&arr){
    // BRUTE FORCE

    // for(int i=0;i<arr.size();i++){
    //     int count=0;
    //     for(int j=0;j<arr.size();j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count>(arr.size()/2)){
    //         return arr[i];
    //     }
    // }
    // return 0;

    // BETTER APPROACH(HASHING)

    // map<int,int>mpp;

    // for(int i=0;i<arr.size();i++){
    //     mpp[arr[i]]++;
    // }
    // for(auto it:mpp){
    //     if(it.second>arr.size()/2){
    //         return it.first;
    //     }
    // }
    // return 0;


    // OPTIMAL APPROACH(MOORE'S VOTING ALGORITHM)
    int count=0;
    int el;
    for(int i=0;i<arr.size();i++){
        if(count == 0){
            count=1;
            el=arr[i];
        }
        else if(el == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    int c1=0;
    for(int nums:arr){
        if(nums == el){
            c1++;
        }
    }
    if(c1>arr.size()/2){
        return el;
    }
    else{
        return 0;
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=majorityElement(arr);
    cout<<ans<<" ";
    return 0;
}