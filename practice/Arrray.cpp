#include <bits/stdc++.h>
using namespace std;

void printing(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing done"<<endl;
}

void printing1(char arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing done"<<endl;
}

void taking(int arr[],int size){
     for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void taking1(char arr[],int size){
     for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


int search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"TARGET FOUND!!"<<endl;
            return i;
        }
    }
    cout<<"TARGET NOT FOUND!!"<<endl;
    return 0;
        
}

void find(int arr[],int size){
    int count0=0;
    int count1=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
    }
    cout<<count0<<" "<<count1<<endl;
}

int main(){
    // int arr[5];
    // taking(arr,5);
   
    // cout<<"The number at index 1 : "<<arr[1]<<endl;
    // // for(int i=0;i<5;i++){
    // //     cout<<arr[i]<<" ";
    // // }
    // printing(arr,5);
    // cout<<endl;

    // char ch[5];
    // taking1(ch,5);
    // cout<<"The letter at index 1 : "<<ch[1]<<endl;
    // printing1(ch,5);
    // cout<<endl;




    // int number[10];
    // taking(number,10);
    // for(int i=0;i<10;i++){
    //     cout<<2 * number[i]<<" ";
    // }
    // cout<<endl;

    int num[5];
    taking(num,5);
    printing(num,5);
    // search(num,5,2);
    find(num,5);






}