#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        while(i<n){
            arr[i]=arr[n-1];
            i++;
            n--;
        }
    }
    
}