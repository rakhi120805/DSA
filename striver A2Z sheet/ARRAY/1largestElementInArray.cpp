// #include <bits/stdc++.h>
// using namespace std;
// int largesElement(vector<int>&arr,int n){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int largestE=largesElement(arr,n);
//     cout<<"the largest element is: "<<largestE;
//     return 0;
// }




// USING RECURSSION 

#include<bits/stdc++.h>
using namespace std;

// int largest=INT_MIN;

int largestE(vector<int>&arr,int i){
    int n=arr.size();
    int l;
    if(i==n-1)return l;
    
    l=largestE(arr,i + 1);

    return max(l,)
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest=largestE(arr,0);
    cout<<largest;
    return 0;

}




#include<vector>