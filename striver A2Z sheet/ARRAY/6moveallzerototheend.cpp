#include<bits/stdc++.h>
using namespace std;

//arr[]={1,0,2,3,2,0,0,4,5,1}

vector<int> moveAllZeros(vector<int>&arr,int n){
    // BRUTE FORCE

    // vector<int>temp;
    

    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         temp.push_back(arr[i]);
    //     }
    // }
    // int x=temp.size();
    // for(int i=0;i<x;i++){
    //     arr[i]=temp[i];
    // }
    // for(int i=x;i<n;i++){
    //     arr[i]=0;
    // }
    // return arr;



    //OPTIMAL SOLUTION

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }


    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    return arr;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>ans(n);
    ans=moveAllZeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}