#include <bits/stdc++.h>
using namespace std;
void del(int arr[],int n,int pos){
    for(int i=0; i<pos + 1;i++){
        if(i ==  pos){
            arr[pos]=arr[pos + 1];
        }
        pos++;
        arr[pos ]= arr[pos + 1];
    }
    cout<<arr[n];

}
int main(){
    int n;
    
    int arr[n]={5,6,7,5,1,8,5};
    del(arr,n,5);
    return 0;

}