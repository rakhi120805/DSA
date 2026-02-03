#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>&arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low + (high - low)/2;
        if(arr[mid]>arr[mid + 1] && arr[mid]>arr[mid - 1]){
            return mid;
        }
        else if(arr[mid]<arr[mid + 1]){
            low=mid + 1;
        }
        else{
            high=mid - 1;
        }
    }
    return -1;
}

int findElement(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int p=peak(arr);
    
    while(low<=p){
        int mid=low + (p - low)/2;
        if(arr[mid]==target){
                return mid;
            }
        else if(arr[mid]<target){
            low=mid + 1;
        }
        else{
            p=mid - 1;
        }
    }
    int p1=peak(arr) + 1;
      while(p1<=high){
        int mid=p1 + (high - p1)/2;
        if(arr[mid]==target){
                return mid;
            }
        else if(arr[mid]<target){
            p1=mid + 1;
        }
        else{
            high=mid - 1;
        }
    }
    return -1;


}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findElement(arr,m);
    cout<<ans;
}