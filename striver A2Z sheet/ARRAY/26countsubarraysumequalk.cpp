#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE
// int countsubarray(vector<int>&arr,int target){
//     int n=arr.size();
//     int cnt=0;
//     // i will traverse the whole array
//     for(int i=0;i<n;i++){
//         // j will traverse from i to whole array
//         for(int j=i;j<n;j++){
//             int sum=0;
//             // k will traverse from i to j only 
//             for(int k=i;k<=j;k++){
//                 sum+=arr[k];
//             }
//             if(sum==target)cnt++;
//         }
//     }
//     return cnt;
// }

// BETTER APPROACH
// int countsubarray(vector<int>&arr,int target){
//     int n=arr.size();
//     int cnt=0;
//     // i will traverse the whole array
//     for(int i=0;i<n;i++){
//         // j will traverse from 0 to i
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==target)cnt++;
//         }
//     }
//     return cnt;
// }

// OPTIMAL APPROACH

int countsubarray(vector<int>&arr,int target){
    int n=arr.size();
    int cnt=0;
    int sum=0;
    unordered_map<int,int>mpp;
    mpp[0]=1;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        int rem=sum - target;

        if(mpp.find(rem)!=mpp.end()){
            cnt+=mpp[rem];
            mpp[sum]++;
        }

        if(mpp.find(sum)==mpp.end()){
            mpp[sum]++;
        }
    }
    return cnt;

}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=countsubarray(arr,target);
    cout<<ans;
}
