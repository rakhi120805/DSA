//print the sum of n numbers

#include <bits/stdc++.h>
using namespace std;

//parameterised

void summ(int i,int sum=0){
    if(i<1){
        cout<<sum<<endl;
        return;
    }

    summ(i - 1,sum + i);
}
//functional

int  summation(int n){
    if(n == 0){
        return 0;
    }

    return n + summation(n - 1);

}

int main(){
    summ(5);
    cout<<"second part"<<endl;
    int ans=summation(5);
    cout<<ans;
}