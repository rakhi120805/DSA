#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={4,5,8,9,7};
    int key;
    cin>>key;
    bool found=search(arr,5,key);
    if(found){
        cout<<"key found";
    }
    else{
        cout<<"not found";
    }
}
// int main(){
//     int arr[5]={5,7,9,8,3};
//     int key;
//     cin>>key;
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             cout<<
//         }
//     }
// }