//print name 5 times

#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
    cout<< "rakhi" <<endl;

    f(i + 1 , n);
}

int main(){
    f(1,3);
}