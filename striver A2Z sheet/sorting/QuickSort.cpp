#include<bits/stdc++.h>
using namespace std;
int qS(vector<int>&arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=low;
    
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high - 1){
            i++;
        }
        while(arr[j]>=arr[pivot] && j>=low + 1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[pivot],arr[j]);
    return j;
}

void QuickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pI=qS(arr,low,high);
        QuickSort(arr,low,pI - 1);
        QuickSort(arr,pI + 1,high);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    QuickSort(arr,0,n - 1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
