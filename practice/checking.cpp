#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=2;
    while(num<=n-1){
        if(n%num==0){
            cout<<"not prime";
        }
        else{
            cout<<"prime"<<endl;
        }
        num=num+1;
    }
}