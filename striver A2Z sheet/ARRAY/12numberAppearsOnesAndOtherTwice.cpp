#include <bits/stdc++.h>
using namespace std;

// arr={1,1,2,3,3,4,4}

int numberAppearsOnesAndOtherTwice(vector<int>&arr){
    // BRUTE FORCE

    
    // for(int i=0;i<arr.size();i++){
    //     int count=0;
    //     int num=arr[i];
    //     for(int j=0;j<arr.size();j++){
    //         if(arr[j] == num){
    //             count++;
    //         }
    //     }
    //     if(count == 1){
    //         return num;
    //     }
    // }
    // return -1;


    // BETTER APPROACH(hashing)

    // int maxi=0;
    // for(int i=0;i<arr.size();i++){
    //     maxi=max(arr[i],maxi);
    // }
    // vector<int>hash(maxi + 1 , 0);
    // for(int i=0;i<arr.size();i++){
    //     hash[arr[i]]++;
    // }
    // for(int i =0;i<arr.size();i++){
    //     if(hash[arr[i]] == 1){
    //         return arr[i];
    //     }
    // }
    // return -1;

    
    // OPTIMAL APPROACH

    int xor1=0;
    for(int i=0;i<arr.size();i++){
        xor1=arr[i]^xor1;
    }
    return xor1;

}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=numberAppearsOnesAndOtherTwice(arr);
    cout<<ans;
    return 0;

}

