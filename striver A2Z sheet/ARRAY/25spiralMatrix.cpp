#include<bits/stdc++.h>
using namespace std;
void print_right(vector<vector<int>>& matrix,int top,int left,int right){
    for(int i=left;i<=right;i++){
        cout<<matrix[top][i]<<"  ";
    }
    cout<<" ";
}
void print_bottom(vector<vector<int>>& matrix,int right,int top,int bottom){
    for(int i=top;i<=bottom;i++){
        cout<<matrix[i][right]<<"  ";
    }
    cout<<" ";
}
void print_left(vector<vector<int>>& matrix,int bottom,int right,int left){
    for(int i=right;i>=left;i--){
        cout<<matrix[bottom][i]<<"  ";
    }
    cout<<" ";
}
void print_top(vector<vector<int>>& matrix,int left,int bottom,int top){
    for(int i=bottom;i>=top;i--){
        cout<<matrix[i][left]<<"  ";
    }
    cout<<" ";
}

void spiralMatrix(vector<vector<int>>& matrix,int top,int bottom,int left,int right){
    if(top>=bottom||right<=left)return;
    print_right(matrix,top,left,right);
    top++;
    print_bottom(matrix,right,top,bottom);
    right--;
    if(left<=right){
    print_left(matrix,bottom,right,left);
    bottom--;
    }
    if(top<=bottom){
    print_top(matrix,left,bottom,top);
    left++;
    }
    spiralMatrix(matrix,top,bottom,left,right);
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

    spiralMatrix(matrix,0,n-1,0,n-1);

}