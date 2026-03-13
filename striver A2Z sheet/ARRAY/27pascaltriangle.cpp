#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    vector<int>ans;
    int start=1;
    ans.push_back(start);
    for(int i=1;i<row;i++){
        start=start * (row - i);
        start=start / i;
        ans.push_back(start);
    }
    return ans;
}

vector<vector<int>> pascal_triangle(int n){
    vector<vector<int>> list;
    vector<int>rows;
    for(int i=1;i<=n;i++){
        rows=generateRow(i);
        list.push_back(rows);
    }
    return list;

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>pt(n,vector<int>(n));
    pt=pascal_triangle(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pt[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}