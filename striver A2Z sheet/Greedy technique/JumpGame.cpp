#include<bits/stdc++.h>
using namespace std;

bool reachTheEnd(vector<int>&arr){
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        // if(arr[i] == 0){
        //     return false;
        // }
        if(i>maxi){
            return false;
        }
        maxi=max(maxi,i + arr[i]);
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = reachTheEnd(arr);
    cout<<ans;
    return 0;
}