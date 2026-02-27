#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr,int i){
    int n=arr.size();
    int lc=2*i+1;
    int rc=2*i+2;
    int x=i;
    if(arr[x]>arr[lc] && lc<arr.size()){
        x=lc;
    }
    if(arr[x]>arr[rc] && rc<arr.size()){
        x=rc;
    }

    if(x!=i){
        swap(arr[x],arr[i]);
        heapify(arr,x);
    }
    else{
        return;
    }

}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n/2;i>=0;i--){
        heapify(arr,i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

