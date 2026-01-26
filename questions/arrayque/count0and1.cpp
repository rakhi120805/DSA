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

void counting(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else{
            onecount++;
        }
    }
    cout<<zerocount<<" "<<onecount;
}

int main(){
    int n;
    cin>>n;

    int num[n];
    inputarray(num,n);
    printarray(num,n);
    counting(num,n);

}