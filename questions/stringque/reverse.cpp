#include<bits/stdc++.h>
using namespace std;
string rev(string s){
    int n=s.length();
    // THIS IS THE NORMAL APPROACH
    
    // for(int i=0;i<n/2;i++){
    //     swap(s[i],s[n - i - 1]);
    // }
    // return s;

    // THIS IS A TWO POINTER APPROACH"

    // int i=0;int j=n-1;
    // while(i<j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }

    // This is using STL
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    string s;
    cin>>s;
    string s2=rev(s);
    cout<<"This is the prev string: "<<s;
    cout<<"This is the new string : "<<s2;
}