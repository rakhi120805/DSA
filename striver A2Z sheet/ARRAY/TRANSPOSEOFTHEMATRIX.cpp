#include<bits/stdc++.h>
using namespace std;


void transpose(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
            if(i!=j){
                swap(matrix[i][j],matrix[j][i]);
            }
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
    transpose(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}