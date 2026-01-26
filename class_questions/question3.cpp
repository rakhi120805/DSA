#include<bits/stdc++.h>
using namespace std;

int mostFrequentElement(int arr[],int n){

    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int count=0;
    int el;

    for(auto it:mpp){
        count=max(count,it.second);
        if(count == it.second){
            el=it.first;
        }
    }
    return el;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=mostFrequentElement(arr,n);
    cout<<ans;
}