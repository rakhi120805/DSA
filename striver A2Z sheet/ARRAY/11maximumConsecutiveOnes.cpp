#include<bits/stdc++.h>
using namespace std;

long long maximumConsecutiveOnes(vector<int>&arr){
    long long maxi=0;
    long long counti=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            counti++;
            maxi=  max(counti,maxi);
        }
        else{
            counti=0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long ans=maximumConsecutiveOnes(arr);
    cout<<ans;
    return 0;


}