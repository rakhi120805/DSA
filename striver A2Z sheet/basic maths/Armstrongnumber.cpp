#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int sum=0;
    int temp=n;
    int size=to_string(n).length();
    while(temp>0){
        int digit=temp%10;
        int power=pow(digit,size);
        sum=sum + power;
        temp=temp/10;
    }
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    bool ans=isArmstrong(n);
    cout<<ans;
}