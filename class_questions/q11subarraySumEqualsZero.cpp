#include<bits/stdc++.h>
using namespace std;

int sumEqualsZero(vector<int>&arr){
    int n=arr.size();
    // O(N ^ 2)
    // ------------------------------------------------
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     int start = i;
    //     for(int j=i;j<n;j++){
    //         sum=sum + arr[j];
    //         if(sum == 0){
    //         int end=j;
    //         cout<<start<<" "<<end<<endl;
    //         cout<<"found it"<<endl;
    //         return true;
    //     }
    //     }
        
    // }
    // cout<<"not found"<<endl;
    // return false;

    // O(N)
    // using set will be good if do not need indexing 
    // ----------------------------------------------

     unordered_map<int,int>mpp;
     int sum=0;
     int count=0;
     for(int i=0;i<n;i++){
        int sum=sum + arr[i];
        if(sum == 0){
            count++;
        }
        if(mpp.find(sum)!=mpp.end()){
            count++;
        }
        else{
            mpp[sum]=0;
        }
     }
     return (count*(count + 1));
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sumEqualsZero(arr);
    cout<<ans;
}