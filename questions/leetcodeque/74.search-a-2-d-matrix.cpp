#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n=matrix.size();
    int m=matrix[0].size();
    int low=0;
    int high=(n*m)-1;
    while(low<=high){
        int mid=low+(high - low)/2;
        int i=mid/m;
        int j=mid%m;
        if(matrix[i][j]==target){
            return true;
        }
        else if(matrix[i][j]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
   
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
    int t;
    cin>>t;
    int ans = searchMatrix(arr,t);
    
    cout<<ans;
}



