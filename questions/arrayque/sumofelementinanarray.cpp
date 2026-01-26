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


int main(){
    int n;
    cin>>n;
    int num[n];
    int sum=0;
    inputarray(num,n);
    printarray(num,n);
    for(int i=0;i<n;i++){
        sum=sum + num[i];
    }

    cout<<"The sum of arrays is: "<<sum<<endl;



    

}