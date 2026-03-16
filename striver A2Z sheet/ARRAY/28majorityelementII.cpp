#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE

// vector<int> majorityElement(vector<int>&arr){
//     vector<int>ans;
//     for(int i=0;i<arr.size();i++){
//         if(ans.size()==0 || ans[0]!=arr[i]){
//         int count=0;
//         for(int j=0;j<arr.size();j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count > arr.size() / 3 )ans.push_back(arr[i]);
//         if(ans.size() == 2)break;
//     }
//     }
//     return ans;
// }
// BETTER APPROACH

// vector<int>majorityElement(vector<int>&arr){
//     vector<int>ans;
//     map<int,int>mpp;
//     int check=(arr.size() / 3)+1;
//     for(int i=0;i<arr.size();i++){
//         mpp[arr[i]]++;
//         if(mpp[arr[i]] == check){
//             if(ans.size() == 0 || ans.back()!=arr[i]){
//                 ans.push_back(arr[i]);
//             }
//         }
//     }
//     return ans;
// }

// OPTIMAL APPROACH

vector<int> majorityElement(vector<int>&arr){
    vector<int>ans;
    int cnt1=0;int cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MAX;

    for(int i=0;i<arr.size();i++){
        if(cnt1==0 && arr[i]!=el2){
            cnt1=1;
            el1=arr[i];
        }
        else if(cnt2 == 0 && arr[i]!=el1){
            cnt2=1;
            el2=arr[i];
        }
        else if(arr[i] == el1)cnt1++;
        else if(arr[i] == el2)cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    cout<<el1<<" "<<el2<<endl;
    cnt1=0;
    cnt2=0;
    int check=(arr.size() / 3) + 1;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == el1)cnt1++;
        else if(arr[i] == el2)cnt2++;

        if(cnt1 == check && (ans.size() == 0 || ans.back()!=el1)){
            ans.push_back(el1);
        }
        else if(cnt2 == check && (ans.size() == 0 || ans.back()!= el2)){
            ans.push_back(el2);
        }
    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=majorityElement(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}