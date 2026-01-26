#include <bits/stdc++.h>
using namespace std;

int solution(vector<int>&arr){
    vector<int>temp(32,0);
    int result=0;
    for(int bit=0;bit<32;bit++){
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] & (1<<bit)){
                count++;
            }
        }
        if(count%3 !=0){
            result=result|(1<<bit);
        }
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=solution(arr);
    cout<<ans;
}