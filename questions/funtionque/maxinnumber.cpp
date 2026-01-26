#include <bits/stdc++.h>
using namespace std;

int find_max(int a,int b,int c){
    int max=a;
    if(b>a && b>c){
        max=b;
    }
    else if(c>a && c>b){
        max=c;
    }
    return max;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=find_max(a,b,c);
    cout<<ans<<endl;
}