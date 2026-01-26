#include <bits/stdc++.h>
using namespace std;
void recursiveInsrtionSort(vector<int>&arr,int n,int i){
    
    if(i == n)return;
    int j=i;


    while(j>0 && arr[j - 1]>arr[j]){
        swap(arr[j - 1],arr[j]);
        j--;
    }

    recursiveInsrtionSort(arr,n,i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recursiveInsrtionSort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
