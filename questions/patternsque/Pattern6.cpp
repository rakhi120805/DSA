// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
        
//     }
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}