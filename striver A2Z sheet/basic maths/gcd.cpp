#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a == 0){
        cout<<b;
    }
    else{
        cout<<a;
    }
}
//euclidean algorithm 
//gcd(a,b) =gcd(a%b,b)
//gcd(n1,n2)=gcd(n1 - n2,n2)
