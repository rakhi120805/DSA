1class Solution {
2public:
3    void r(string &s){
4        reverse(s.begin(),s.begin()+1);
5        cout<<s<<" ";
6        reverse(s.begin()+1,s.end());
7        cout<<s<<" ";
8        reverse(s.begin(),s.end());
9    }
10    bool rotateString(string s, string goal) {
11        if(s.size()!=goal.size())return false;
12        if(s==goal)return true;
13        int n=1;
14        while(n<s.size()){
15            r(s);
16            cout<<s<<' ';
17            if(s==goal)return true;
18            n++;
19        }
20    return false;
21    }
22};