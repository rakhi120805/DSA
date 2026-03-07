#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE APPROACH

// vector<vector<int>> rotateBy90(vector<vector<int>> &matrix){
    
//     int n=matrix.size();
//     int m=matrix[0].size();
//     vector<vector<int>> ans(m,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             ans[j][n-1-i]=matrix[i][j];
//         }
//     }
//     return ans;
// }
void transpose_matrix(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

void rotate_matrix(vector<vector<int>>& matrix){
    transpose_matrix(matrix);
    int n=matrix.size();
    int m=matrix[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            swap(matrix[i][j],matrix[i][m-j-1]);
        }
    }
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
    rotate_matrix(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}