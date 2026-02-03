// IT IS ALSO A UNSTABLE SORT- WHAT IS STABLE SORT 
// STABLE SORT IS SAYING THAT IF WE GOT THE FIRST ELEMENT 0 AND THEN 0 SO WE
// ARE MAKING SURE THAT AFTER SWAPING THE FIRST 0 OCCURED WILL BE AT THE FIRST INDEX

#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int>&arr){
    int n=arr.size();
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
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
    vector<int>ans=sorting(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}