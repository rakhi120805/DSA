#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>&arr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(ans.size()==0 || ans[0]!=arr[i]){
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > arr.size() / 3 )ans.push_back(arr[i]);
        if(ans.size() == 2)break;
    }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=majorityElement(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}