#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int>arr,int n){
    int largest=arr[0];
    int secondL=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondL=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondL){
            secondL=arr[i];
        }
    }
    return secondL;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int SlargestE=secondLargestElement(arr,n);
    cout<<"the second largest element is: "<<SlargestE;
    return 0;
}