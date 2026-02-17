#include<bits/stdc++.h>
using namespace std;

string clockwise(string s,int index){
    int a=s[index] - '0';
    // cout<<a<<endl;
    if(a==9){
        a=0;
    }
    else{
    a=a+1;
    }
    s[index]=a+'0';
    return s;
}
string anticlockwise(string s,int index){
    int a=s[index] - '0';
    // cout<<a<<endl;
    if(a==0){
        a=9;
    }
    else{
    a--;
    }
    s[index]=a+'0';
    return s;
}

unordered_set<string> possibility(string &s){
    unordered_set<string>set;
    for(int i=0;i<s.length();i++){
        string a=s;
        clockwise(a,i);
        set.insert(a);
         
    }
    for(int i=0;i<s.length();i++){
        string a=s;
        anticlockwise(a,i);
        set.insert(a);
    }
    return set;
}

int openLock(vector<string>& deadends, string target) {
    
    queue<pair<string,int>>q;
    unordered_set<string>visited;
    unordered_set<string>dead;
    if("0000" == target)return 0;
    
    q.push({"0000",0});
    for(int i=0;i<deadends.size();i++){
        dead.insert(deadends[i]);
    }
    if(dead.find("0000")!=dead.end())return -1;
    while(!q.empty()){
        string a=q.front().first;
        int step=q.front().second;
        for(int i=0;i<4;i++){
            string clock=clockwise(a,i);
            if(clock == target)return step + 1;
            if(!visited.count(clock) && !dead.count(clock)){
                visited.insert(clock);
                q.push({clock,step+1});
            }
            string anti=anticlockwise(a,i);
            if(anti == target)return step + 1;
            if(!visited.count(anti) && !dead.count(anti)){
                visited.insert(anti);
                q.push({anti,step + 1});
            }
        }


    }
return -1;

}

int main(){
    string s;
    cin>>s;
    unordered_set<string>set;

    set=possibility(s);
    for(auto it:set)cout<<it<<endl;

}