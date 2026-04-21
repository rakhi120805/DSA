
#include<bits/stdc++.h>
using namespace std;

bool canEat(vector<int>arr,int n,int h){
    int time=0;
    for(int i=0;i<arr.size();i++){
         time=time+ceil((float)arr[i]/n);
        // if(arr[i]<=n){
        //     time++;
        //     // cout<<"time when smaller of equal "<<time<<endl;
        // }
        // else{
        //     // cout<<ceil(arr[i]/n)<<endl;
        //     time=time+ceil(arr[i]/n)+1;
        //     // cout<<"time when greater "<<time<<endl;
        // }
    }
    if(time<=h){
        // cout<<"koko can eat in "<<n<<" hours"<<endl;
        return true;
    }
    return false;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low=1;
    int high=*max_element(piles.begin(),piles.end());
    int mini=INT_MAX;
    while(low<=high){
        int mid=(high+low)/2;
        if(canEat(piles,mid,h)){
            mini=min(mini,mid);
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return mini;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h;
    cin>>h;
    
    int ans = minEatingSpeed(arr,h);
    
    cout<<ans;
}


