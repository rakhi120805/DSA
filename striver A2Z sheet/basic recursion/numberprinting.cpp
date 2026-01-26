//print linearly from 1 to n

#include<bits/stdc++.h>
using namespace std;

void printing(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printing(i + 1,n);
}




//print linearly from n to 1

void revprinting(int i,int n){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    revprinting(i,n - 1);
}
int main(){
    printing(1,8);
    revprinting(1,8);

}