#include<bits/stdc++.h>
using namespace std;

// int printSubsequence(vector<int>&arr,int m){
//     int n=arr.size();
//     int max_dist=INT_MIN;
    
   
    
//     for(int i=1;i< (1<<n);i++){
//         int min_dist=INT_MAX;
//         int num=i;
//          vector<int>temp;
//         for(int j=0;j<n;j++){
//             if((num & (1<<j) )!= 0){
//                 temp.push_back(arr[j]);
//                 // cout<<arr[j];
//             }  
//         }
//         if(temp.size() == m){
//             for(int k=1;k<temp.size();k++){
//                 // cout<<temp[k]<<" ";
//                 int dist=arr[i] - arr[i - 1];
//                 min_dist=min(min_dist,dist);
//             }
//             // cout<<"\n";
//         }
//         max_dist=max(max_dist,min_dist);
//     }
   
//     return max_dist;

//     // delete[] temp;
// }

bool isPossibl(vector<int>&arr,int d,int k){
    int n=arr.size();
    int count = 1;
    int last_pos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] - last_pos>=d){
            count++;
            last_pos=arr[i];
        }
        if(count == k){
            return true;
        }
    }
    return false;
}

int agg_cows(vector<int>&arr,int n,int k){
    int s=1;
    int e=n;
    int ans=0;
    while(s<=e){
        int mid=s + (e - s)/2;
        if(isPossibl(arr,mid,k)){
            ans=mid;
            s=mid + 1;
        }
        else{
            e=mid - 1;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=agg_cows(arr,n,m);
    cout<<ans;
    
}