#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr){
    int n=arr.size();
    vector<int>ans;
    // BRUTE FORCE
    // for(int i=0;i<n;i++){
    //     bool leader=true;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i] <=arr[j]){
    //             leader=false;
    //             break;
    //         }
    //     }
    //     if(leader==true){
    //         ans.push_back(arr[i]);
    //     }
    // }
    // OPTIMAL SOLUTION

    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans.push_back(maxi);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans=leaders(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
}