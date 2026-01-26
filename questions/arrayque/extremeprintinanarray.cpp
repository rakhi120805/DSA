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
void extreme(int arr[],int size){
    int left=0;
    int right=size - 1;
    while(left<=right){
        if(left==right){
            cout<<arr[left]<<endl;
        }
        else{
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
            
        }
        left++;
        right--;
    }
}
//     void extreme(int arr[],int size) {
//     int left = 0, right =size - 1;
//     while(left <= right) {
//         cout << arr[left] << " ";
//         if(left != right) {
//             cout << arr[right] << " ";
//         }
//         left++;
//         right--;
//     }
//     cout << endl;
// }


int main(){
    int n;
    cin>>n;
    int num[n];
    inputarray(num,n);
    printarray(num,n);
    cout<<"After extremeprint"<<endl;
    extreme(num,n);
}
