#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    cout<<"address of x: "<<&x<<'\n';
    int *ptr=&x;
    cout<<"address of ptr : "<<&ptr<<'\n';
    cout<<"value of insdie of ptr :"<<ptr<<'\n';
    cout<<"value of the address of ptr : "<<*ptr<<'\n';
}