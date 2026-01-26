#include <bits/stdc++.h>
using namespace std;
int reversen(int n){
    int temp=n;
    int reverse = 0;
    while(temp>0){
        int digit=temp%10;
        if(reverse<INT_MIN/10 || reverse>INT_MAX/10){
        return -1;
        }
        reverse=reverse * 10 + digit;    
        temp=temp/10;
    }
    return reverse;
}

int main(){
    int n;
    cin>>n;
    int ans=reversen(n);
    cout<< ans;
    return 0;
}