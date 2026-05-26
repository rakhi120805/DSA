#include<bits/stdc++.h>
using namespace std;
int maxNumberOfOnes(vector<vector<int>>&mat){
      int n=mat.size();
        int m=mat[0].size();
        int ans=-1;
        int maxi=-1;
        for(int i=0;i<n;i++){
            int cnt=-1;
            int ind=-1;
            int low=0;
            int high=m-1;
            while(low<=high){
                int mid=low+(high - low)/2;
                if(mat[i][mid]==1){
                    ind=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(ind!=-1)cnt=m-ind;
            if(cnt>maxi){
                maxi=cnt;
                ans=i;
            }
        }
        return ans;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    int ans = maxNumberOfOnes(arr);
    
    cout<<ans;
}