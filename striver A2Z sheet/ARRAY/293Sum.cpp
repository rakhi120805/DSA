#include<bits/stdc++.h>
using namespace std;
// vector<vector<int>> threeSum(vector<int>&arr){
//     int n=arr.size();
//     set<vector<int>>s;
    
//     for(int i=0;i<n;i++){
//         for(int j=i + 1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if((arr[i] + arr[j] + arr[k])==0){
//                     vector<int>v;
//                     v.push_back(arr[i]);
//                     v.push_back(arr[j]);
//                     v.push_back(arr[k]);
//                     sort(v.begin(),v.end());
//                     s.insert(v);
//                 }
              
//             }
//         }
//     }
//     vector<vector<int>>ans(s.begin(),s.end());
//     return ans;
// }

// Better Approach

// vector<vector<int>> threeSum(vector<int>&arr){
//     int n=arr.size();
//     set<vector<int>>s;
//     for(int i=0;i<n;i++){
//         set<int>mpp;
//         for(int j=i + 1;j<n;j++){
//             int third=-(arr[i] + arr[j]);
//             if(mpp.find(third)!=mpp.end()){
//                 vector<int>temp;
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[j]);
//                 temp.push_back(third);
//                 sort(temp.begin(),temp.end());
//                 s.insert(temp);
//             }
//             mpp.insert(arr[j]);
//         }
//     }
//     vector<vector<int>>ans(s.begin(),s.end());
//     return ans;
// }

// OPTIMAL APPROACH
vector<vector<int>> threeSum(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    set<vector<int>>s;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        int j=i+1;
        int k=n-1;
        
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==0){
                vector<int>v={arr[i],arr[j],arr[k]};
                s.insert(v);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])j++;
                while(j<k && arr[k]==arr[k+1])k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                k--;
            }
        }
    }
    vector<vector<int>>ans(s.begin(),s.end());
    return ans;
}
int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<vector<int>>ans=threeSum(arr);
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}