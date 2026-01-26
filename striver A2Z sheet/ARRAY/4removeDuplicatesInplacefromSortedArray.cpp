#include<bits/stdc++.h>
using namespace std;
vector<int> removeDup(vector<int>arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i + 1]=arr[j];
            i++;
        }
    }
    arr.resize(i+1);
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=removeDup(arr,n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}