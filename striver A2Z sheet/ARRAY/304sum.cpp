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

    // set<vector<int>>st;
    // int n=arr.size();

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         set<int>consist;
    //         for(int k=j+1;k<n;k++){
    //             int rem=target-(arr[i]+arr[j]+arr[k]);
    //             if(consist.find(rem)!=consist.end()){
    //                 vector<int>temp={arr[i],arr[j],arr[k],rem};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }
    //             consist.insert(arr[k]);
    //         }
    //     }
    // }
    // vector<vector<int>>ans={st.begin(),st.end()};
    // return ans;

    // OPTIMAL APPROACH

    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        for(int j=i+1;j<arr.size();j++){
            if(j>i+1 && arr[j]==arr[j+1])continue;
            int k=j+1;
            int l=arr.size()-1;
            while(k<l){
                int sum=arr[i]+arr[j]+arr[k]+arr[l];
                if(sum==target){
                    if(k>j+1 && arr[k]==arr[k-1]){
                    ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                    k++;
                    l--;
                }
            }


        }
    }
    

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