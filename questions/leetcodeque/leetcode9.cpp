#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    int temp=x;
    int digit;
    int rev=0;
    while(temp>0){
        digit=temp%10;
        rev=rev*10 + digit;
        temp=temp/10;
    }
    if(rev==x){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    bool ans=isPalindrome(n);
    cout<<ans;
}