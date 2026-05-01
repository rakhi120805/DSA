#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>&weights,int days,int cap){
    int load=0;
    int day=1;

    for(int i=0;i<weights.size();i++){
        if(load+weights[i]>cap){
            day=day+1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    if(day<=days)return true;
    return false;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low=*max_element(weights.begin(),weights.end());
    int sum=0;
    for(auto it:weights){
        sum+=it;
    }
    int high=sum;
    int ans=-1;
    while(low<=high){
        int mid=low+(high - low)/2;
        if(possible(weights,days,mid)){
            ans=mid;
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
    int days;
    cin>>days;
    int ans=shipWithinDays(arr,days);
    cout<<ans;
    return 0;

}

