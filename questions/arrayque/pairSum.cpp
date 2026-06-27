#include<bits/stdc++.h>
using namespace std;

bool pairSum(vector<int>&arr,int target){
    int n=arr.size();
    int pivot=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            pivot=i+1;
            break;
        }
    }
    int i=pivot+1;
    int j=pivot;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = 0;
    
    cout<<ans;
}