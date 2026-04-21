#include<bits/stdc++.h>
using namespace std;

double multiply(double number,int n){
    double ans=1.0;
    // while(n>0){
    //     ans=ans*number;
    //     n--;
    // }
    for(int i=1;i<=n;i++){
        ans=ans*number;
    }
    return ans;
}

double getNthroot(int m,int n){
    double low=1;
    double high=m;
    double eps=1e-6;
    while((high-low)>eps){
        double mid=(high + low)/2.0;
        if(multiply(mid,n)<m){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}


int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    double ans = getNthroot(m,n);
    
    cout<<ans;
}