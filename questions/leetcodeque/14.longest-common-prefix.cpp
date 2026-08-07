#include<bits/stdc++.h>
using namespace std;

 string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
       string ans;
       for(int i=0;i<strs[0].size();i++){
        for(int j=1;j<n;j++){
            if(i>=strs[j].size() || strs[j][i]!=strs[0][i])return ans;
        }
        ans+=strs[0][i];
       }
       return ans;
        
    }


int main(){
    int n;
    cin>>n;
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    string ans;
    ans=longestCommonPrefix(str);
    cout<<ans;
}

