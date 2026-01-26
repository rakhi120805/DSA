#include<bits/stdc++.h>
using namespace std;


// BRUTE FORCE
// int isNumberPresent(vector<int>&arr,int N){
//     int n=arr.size();
//     for(int i=1;i<=N;i++){
//         int flag=0;
//         for(int j=0;j<n;j++){
//             if(arr[j] == i){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
// }


// BETTER APPROACH {using hashing}
// int missingNumber(vector<int>&arr,int N){
//     vector<int>hash(N + 1,0);
//     for(int i=0;i<arr.size();i++){
//         hash[arr[i]]=1;
//     }
//     for(int i=1;i<hash.size();i++){
//         if(hash[i] == 0){
//             return i;
//         }
//     }
// }

// OPTIMAL APPROACH{SUM APPROACH AND XOR APPROACH}
int missingNumber(vector<int>&arr,int N){
    // int sum=(N * (N + 1))/2;
    // int s2=0;
    // for(int i=0;i<arr.size();i++){
    //     s2=s2 + arr[i];
    // }
    // return sum - s2;
    int xor1 =0,xor2 = 0;
    for(int i=0;i<arr.size();i++){
        xor2=xor2 ^ arr[i];
        xor1=xor1 ^ (i + 1);
        
    }
    xor1=xor1 ^ N;
    return xor1 ^ xor2;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=missingNumber(a,m);
    cout<<ans;
    return 0;
}