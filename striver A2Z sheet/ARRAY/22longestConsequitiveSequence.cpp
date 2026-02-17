#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE
// bool ls(vector<int>&arr,int num){
//     for(int i=0;i<arr.size();i++){
//         if(arr[i] == num){
//             return true;
//         }
//     }
//     return false;
// }

// int longestS(vector<int>&arr){
//     int n=arr.size();
//     int longest=1;
    
//     for(int i=0;i<n;i++){
//         int x=arr[i];
//         int count=1;
//         while(ls(arr,x + 1) == true){
//             x=x+1;
//             count++;
//         }
//         longest=max(longest,count);
//     }
    
//     return longest;
// }
// BETTER APPROACH

// int longestS(vector<int>&arr){
//     int longest=1;
//     int currS=0;
//     int lastSmaller=INT_MIN;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size();i++){
//         if(arr[i] - 1 == lastSmaller){
//             currS++;
//             lastSmaller=arr[i];
//         }
//         else if(arr[i] - 1!=lastSmaller && arr[i]!=lastSmaller){
//             currS=1;
//             lastSmaller=arr[i];
//         }
//         longest=max(longest,currS);
//     }
//     return longest;
// }
// OPTIMAL APPROACH

int longestS(vector<int>&arr){
    unordered_set<int>s;
    for(auto it:arr){
        s.insert(it);
    }
    // for(auto it:s){
    //     cout<<it<<" ";
    // }

    
    int longest=1;

    for(auto it:s){
        if(s.find(it - 1) == s.end()){
            int start=it;
            // cout<<"this is the start if the we can't find the (it-1): "<<start<<" ";
            int cnt=0;
            while(s.find(start) != s.end()){
                cnt++;
                // cout<<cnt<<" ";
                start=start+1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans =longestS(arr);
    cout<<ans;
    return 0;
}