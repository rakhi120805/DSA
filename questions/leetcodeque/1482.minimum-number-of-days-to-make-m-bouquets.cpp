
#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>arr,int m,int k ,int day){
    int cnt=0;
    int n=arr.size();
    int bouquet=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day){
            cnt++;
        }
        else{
            bouquet+=cnt/k;
            cnt=0;
        }
    }
    if(arr[n-1]<=day)bouquet+=cnt/k;
    if(bouquet>=m)return true;
    return false;
}
int minDays(vector<int>& bloomDay, int m, int k) {
    int n=bloomDay.size();
    if((m*k)>n)return -1;
    int ans=-1;
    int low=*min_element(bloomDay.begin(),bloomDay.end());
    int high=*max_element(bloomDay.begin(),bloomDay.end());
    while(low<=high){
        int mid=low + (high - low)/2;

        if(possible(bloomDay,m,k,mid)){
            ans=mid;

            high=mid-1;
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
    int m,k;
    cin>>m>>k;
    int ans = minDays(arr,m,k);
    
    cout<<ans;
}
    



