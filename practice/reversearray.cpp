#include <bits/stdc++.h>
using namespace std;
int reverse(int n,int arr[]){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
}
void printarray(int n,int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
 
    printarray(n,arr);
    reverse(n,arr);
    
    return 0;
}