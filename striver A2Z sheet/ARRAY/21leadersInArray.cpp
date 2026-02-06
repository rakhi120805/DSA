#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr){
    int n=arr.size();
    vector<int>ans;
    int left=0;
    
    while(left<n ){
        int right=left + 1;
        int store=arr[left];
        while(right<n){
            if(arr[right]>arr[left]){
                left++;
                // right++;
                store=-1;
                break;
            }

            right++;
        }
        if(store!=-1){
            ans.push_back(arr[left]);
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