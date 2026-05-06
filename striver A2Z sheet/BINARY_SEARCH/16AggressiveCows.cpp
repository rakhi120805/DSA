#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>&stalls,int k,int mini){
    // sort(stalls.begin(),stalls.end());
    int cows=k-1;
    int fp=0;
    int cnt=1;
    while(cows--){
        for(int i=fp+1;i<stalls.size();i++){
            if(stalls[i]-stalls[fp] >= mini){
                cnt++;
                fp=i;
                break;
            }
        }
    }
    if(cnt==k){
        return true;
    }
    return false;
}

int aggressiveCows(vector<int>&stalls,int k){
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int low=1;
    int high=*max_element(stalls.begin(),stalls.end()) - stalls[0];
    cout<<high<<endl;
    int ans=-1;
    while(low<=high){
        int mid=low +(high - low)/2;
        if(possible(stalls,k,mid)){
            ans=mid;
            low=mid + 1;
        }
        else{
            high=mid-1;
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
    int k;
    cin>>k;
    int ans = aggressiveCows(arr,k);
    
    cout<<ans;
}