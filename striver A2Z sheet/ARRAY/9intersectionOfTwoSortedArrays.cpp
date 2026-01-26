#include<bits/stdc++.h>
using namespace std;

vector<int> insertionOfTwoSortedArray(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m=b.size();
    vector<int>ans;

    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            if(ans.empty() || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }



    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    vector<int>ans;
    ans=insertionOfTwoSortedArray(a,b);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}