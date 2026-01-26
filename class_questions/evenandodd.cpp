#include <bits/stdc++.h>
using namespace std;

vector<int> sumProduct(vector<int>&arr,int n){
    int sum=0;
    int product=1;
    for(int i=0;i<arr.size();i++){
        sum=sum + arr[i];
        product=product * arr[i];
    }
    return {sum,product};
    
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=sumProduct(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}



//write a function to calculate sum and product in an araay 
//write a function to swap the max and min of an array
//write a funtcion to print all the unique values of an array
//write a funtion to print intersection of two arrays 

