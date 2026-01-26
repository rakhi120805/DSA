#include <bits/stdc++.h>
using namespace std;

void sortAnArrayOf012(vector<int>&arr){
    int low=0;
    int mid=0;
    int high=arr.size() - 1;
    while(mid<=high && mid<arr.size() - 1){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]== 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
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

    sortAnArrayOf012(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;

}