#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int first(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else{
            start = mid + 1;
        }
        mid=start  + (end - start)/2;
    }
    return ans;
}

int last(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
           start = mid +1;
        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else{
            start = mid + 1;
        }
        mid=start  + (end - start)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    printarray(arr,n);
    int k;
    cin>>k;
    int findex=first(arr,n,k);
    int lindex=last(arr,n,k);
    cout<<"the first index is "<<findex<<endl;
    cout<<"the last index is "<<lindex<<endl;
    int index = lindex - findex + 1;

cout<<index<<endl;  
  return 0;
}