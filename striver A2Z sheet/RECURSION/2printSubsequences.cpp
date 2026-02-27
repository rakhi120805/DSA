#include<bits/stdc++.h>
using namespace std;
set<string>st;
void print(string s,int i,string current){
    int n=s.length();
    
    // cout<<i;
    st.insert(current);
    if(i == n ){
        return;
    } 

    print(s,i+1,current + s[i]);
    print(s,i+1,current);

}
int main(){
    string s;
    cin>>s;
    print(s,0,"");
    for(auto it:st){
        cout<<it<<endl;
    }
}