#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateBy90(vector<vector<int>> &matrix){
    
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>>ans;
    ans=rotateBy90(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}