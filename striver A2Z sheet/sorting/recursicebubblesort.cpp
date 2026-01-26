#include<bits/stdc++.h>
using namespace std;
void recursiveBubbleSort(vector<int>&arr,int n){
    if(n == 1){
        return;
    }

    int i=0;
    while(i<n - 1){
        if(arr[i]>arr[i + 1]){
            swap(arr[i],arr[i + 1]);
        }
        i++;
    }
    
    recursiveBubbleSort(arr,n - 1);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recursiveBubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}