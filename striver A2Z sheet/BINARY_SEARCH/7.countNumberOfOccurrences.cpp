#include<bits/stdc++.h>
using namespace std;

// int firstIndex(vector<int>&nums,int target){
//     int n=nums.size();
//     int low=0;
//     int high=n-1;
//     int fi=-1;
//     while(low<=high){
//         int mid=low+(high - low)/2;
//         if(nums[mid]==target){
//             fi=mid;
//             high=mid-1;
//         }
//         else if(nums[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return fi;
// }

// int lastIndex(vector<int>&nums,int target){
//     int n=nums.size();
//     int low=0;
//     int high=n-1;
//     int li=-1;
//     while(low<=high){
//         int mid=low+(high - low)/2;
//         if(nums[mid]==target){
//             li=mid;
//             low=mid+1;
//         }
//         else if(nums[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return li;
// }

// int count(vector<int>&arr,int target){
//     int fi=firstIndex(arr,target);
//     int li=lastIndex(arr,target);
//     if(fi==-1 && li==-1)return 0;
//     return (li - fi)+1;
// }

// Solving using lower bound and upper bound

int lowerBound(vector<int>arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid - 1;
        }
        else {
            low=mid+1;
        }
    }
    return ans;
}
int upperBound(vector<int>arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid - 1;
        }
        else {
            low=mid+1;
        }
    }
    return ans;
}
int count(vector<int>arr,int target){
    int n=arr.size();
    int lb=lowerBound(arr,target);
    cout<<lb<<endl;
    int ub=upperBound(arr,target);
    cout<<ub<<endl;
    if(lb==n || arr[lb]!=target)return -1;
    return (ub - lb);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans=count(arr,target);
    cout<<ans;
}