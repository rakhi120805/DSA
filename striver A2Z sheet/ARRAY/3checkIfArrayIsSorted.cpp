// #include<bits/stdc++.h>
// using namespace std;
// bool isSorted(vector<int>&arr,int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[i - 1]){

//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool ans=isSorted(arr,n);
//     cout<<ans;
// }

// USING RECURSSION 


#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr,int i){
    int n=arr.size();
    if(i==n-1)return true;
    if(arr[i]>=arr[i + 1]){
        return false;
    }
    bool ans=isSorted(arr,i + 1);
    return true && ans;

}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=isSorted(arr,0);
    cout<<ans;
}