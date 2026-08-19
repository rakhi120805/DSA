#include<bits/stdc++.h>
using namespace std;

int ways(int n){
    vector<int>dp(n+1,-1);
    if(n==0)return 1;
    if(n==1)return 1;
    
    
}

int main(){
    int n;
    cin>>n;
    int ans=ways(n);
    cout<<ans;
}