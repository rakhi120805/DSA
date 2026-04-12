#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    for(char c:s){
        if(c=='.')ans=ans+"[.]";
        else ans=ans+c;
    }
    for(char c:ans){
        cout<<c;
    }
    return 0;
}