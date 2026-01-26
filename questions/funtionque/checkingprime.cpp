#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    bool prime=1;
    // if(n==1 && n==2){
    //     prime=1;
    // }
    for(int i=2;i<n;i++){
        if(n % i == 0){
            prime=0;
            break;
        }
    }
    return prime;
}

int main(){
    int n;
    cin>>n;
    bool ans=IsPrime(n);
    cout<<ans<<endl;
}