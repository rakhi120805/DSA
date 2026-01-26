#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done!!"<<endl;
}
void inputarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}

int findmin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int num[n];
    inputarray(num,n);
    printarray(num,n);
    int ans=findmin(num,n);
    cout<<"The minimum number in the array is: "<<ans<<endl;
}