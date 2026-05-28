#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n=matrix.size();
    int m=matrix[0].size();
    int r=0;
    int c=m-1;
    while(r<n && c>=0){
        if(matrix[r][c]==target)return true;
        else if(matrix[r][c]>target)c--;
        else r++;
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


