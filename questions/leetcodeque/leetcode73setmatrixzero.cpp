#include<bits/stdc++.h>
using namespace std;

// BRUTE FORCE
//TIME COMPLEXITY O(n3)


// void markRow(int i,vector<vector<int>>& arr,int m){
//     for(int j=0;j<m;j++){
//         if(arr[i][j] !=0){
//             arr[i][j]= -1;
//         }
//     }
// }
// void markColumn(int j,vector<vector<int>>&arr,int n){
//     for(int i=0;i<n;i++){
//         if(arr[i][j]!=0){
//             arr[i][j]=-1;
//         }
//     }
// }

// void setMinuOne(vector<vector<int>>&arr,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j] == 0){
//                 markRow(i,arr,m);
//                 markColumn(j,arr,n);
//             }
//         }
//     }
// }
// void setzeros(vector<vector<int>>& arr,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j] == -1){
//                 arr[i][j] = 0;
//             }
//         }
//     }
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>arr(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     setMinuOne(arr,n,m);
//     setzeros(arr,n,m);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Optimized Way

vector<int>column{0};
vector<int>row{0};
void markone(vector<vector<int>>&arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 0){
                column[j] = 1;
                row[i]=1;
            }
        }
    }
}
void markZero(vector<vector<int>>&arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] == 1 || column[j] == 1){
                arr[i][j] == 0;
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    markone(arr,n,m);
    markZero(arr,n,m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
    


}