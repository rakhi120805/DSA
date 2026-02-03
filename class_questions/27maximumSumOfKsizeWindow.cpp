#include<bits/stdc++.h>
using namespace std;

int maximum_sum(vector<int>&arr,int k){
    int n=arr.size();
    int left=0;
    int right=0;
    double sum=0;
    double max_sum=INT_MIN;
    while(right<n && left<=right){

         while(left<=right && ((right - left) + 1) > k){
            sum=sum - arr[left];
            left++;
        }
        sum = sum +  arr[right];
        if(((right - left) + 1)==k){
            max_sum=max(max_sum,sum);
        }

        right++;
    }    
    return max_sum;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maximum_sum(arr,m);
    cout<<ans;
}