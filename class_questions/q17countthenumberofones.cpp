#include<bits/stdc++.h>
using namespace std;

int countOnes(vector<int>&arr){
    // int count1=0;
    int n=arr.size();
    int high=n-1;
    int low=0;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid] == 1){
            ans=mid + 1;
            if(arr[mid + 1] == 1){
                low=mid + 1;
            }
            else{
                return ans;
            }
        }
        else if(arr[mid]<1){
            high=mid - 1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=countOnes(arr);
    cout<<ans;
}