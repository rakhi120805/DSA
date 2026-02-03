#include<bits/stdc++.h>
using namespace std;

int index(vector<int>&arr,int target){
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>arr[e]){
            if(arr[s]<=target && arr[mid]>target){
                e=mid - 1;
            }
            else{
                s=mid + 1;
            }
        }
        else{
            if(arr[mid ]<target && arr[e]>=target){
                s=mid+1;
            }
            else{
                e=mid - 1;
            }
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
    int ans=index(arr,m);
    cout<<ans;

}