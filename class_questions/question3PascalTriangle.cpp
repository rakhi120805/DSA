#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=1;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<ans<<" ";
            ans=ans * (n - j)/(j + 1);
        }
        cout<<"\n";

    }
}