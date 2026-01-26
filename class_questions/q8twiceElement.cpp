#include<bits/stdc++.h>
using namespace std;

void solution(vector<int>&arr){
    // map<int,int>mpp;
    // int n=arr.size();
    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     mpp[arr[i]]++;
    // }
    // for(auto it:mpp){
    //     if(it.second > 1){
    //         ans.push_back(it.first);
    //     }
    // }
    // return ans;

    // APPROACH

    /*
    1. pick the element 
    2. index= subtract - 1;
    3. check at this index if already visited that mean its a duplicate 
    4. if not visited so mark the arr[index] as negative
    */

    // for(int i=0;i<arr.size();i++){
    //     int val=abs(arr[i]);
    //     int index=val - 1;
    //     if(arr[index]<0){
    //         cout<<val<<" ";
    //     }
    //     else{
    //         arr[index] = - arr[index];
    //     }
    // }
    // int n=arr.size();
    // int i = 0;
    // while(i < n){
    //     int index = arr[i] - 1;
    //     if(arr[i] != arr[index]){
    //         swap(arr[i], arr[index]);
    //     } else {
    //         i++;
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     if(arr[i] != i + 1){
    //         cout << arr[i] << " ";
    //     }
    // }
    // delete[] arr;

    // int[] arr = {2, 3, 1, 1, 3};
int n = arr.size();
for (int i = 0; i < n; i++) {
    int originalVal = arr[i] % n;
    arr[originalVal] += n;
}
for (int i = 0; i < n; i++) {
    if ((arr[i] / n) >= 2) {
        cout<<i ;
    }
}
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    solution(arr);

    // vector<int>ans=solution(arr);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

}