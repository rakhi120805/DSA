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

bool search(int arr[],int size,int target){
    int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int num[n];
    inputarray(num,n);
    printarray(num,n);
    int target;
    cin>>target;
    bool ans=search(num,n,target);
    if(ans==1){
        cout<<"TARGET FOUND!!"<<endl;
    }
    else{
        cout<<"TARGET NOT FOUND!!"<<endl;
    }

}