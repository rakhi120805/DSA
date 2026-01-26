#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int max(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start + (end - start)/2;
    while(start<end){
        if(arr[mid] < arr[mid + 1]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid=start  + (end - start)/2;
    }
    return end;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    printarray(arr,n);
    
    int value = max(arr,n);

cout<< value <<endl;    return 0;
}