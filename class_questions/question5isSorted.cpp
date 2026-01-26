#include <bits/stdc++.h>
using namespace std;

int isSorted(vector<int>&arr){
    int ans;
    int n=arr.size();
    for(int i=0;i<n - 1;i++){
        if(arr[i]>arr[(i + 1)]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=isSorted(arr);
    cout<<ans;
    

}
