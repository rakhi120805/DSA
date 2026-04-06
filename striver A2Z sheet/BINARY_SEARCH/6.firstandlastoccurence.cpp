
#include<bits/stdc++.h>
using namespace std;
int firstIndex(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int fi=-1;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(nums[mid]==target){
            fi=mid;
            high=mid-1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return fi;
}

int lastIndex(vector<int>&nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int li=-1;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(nums[mid]==target){
            li=mid;
            low=mid+1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return li;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first=firstIndex(nums,target);
    int last=lastIndex(nums,target);
    vector<int>ans={first,last};
    return ans;
        
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
    vector<int>ans=searchRange(arr,target);
    for(auto it:ans){
        cout<<it;
    }
    return 0;
}


