#include <bits/stdc++.h>
using namespace std;

vector<int> rotateByDPlacese(vector<int>&arr,int d){
    // BRUTE FORCE
    // int n=arr.size();
    // d%=n;  // if d>n
    // vector<int>temp(d);
    // for(int i=0;i<d;i++){
    //     temp[i]=arr[i];
    // }
    // for(int i= d;i<n;i++){
    //     arr[i - d]=arr[i];
    // }
    // int j=0;
    // for(int i=n - d;i<n;i++){
    //     arr[i]=temp[j];
    //     j++;
    // }

    //OPTIMAL SOLUTION

    int n=arr.size();
    d%=n;
    reverse(arr.begin(),arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(),arr.end());

}

int main(){
    int n,d;
    cin>>n>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateByDPlacese(arr,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}