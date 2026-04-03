#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<int>&arr,int target){
    // BRUTE FORCE
    // set<vector<int>>st;
    // int n=arr.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             for(int l=k+1;l<n;l++){
    //                 long long sum=arr[i]+arr[j]+arr[k]+arr[l];
    //                 if(sum==target){
    //                     vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
    //                     sort(temp.begin(),temp.end());
    //                     st.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>>ans={st.begin(),st.end()};
    // return ans;

    // BETTER APPROACH

    set<vector<int>>st;
    int n=arr.size();
    

}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>ans=sum(arr,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}