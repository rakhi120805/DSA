#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(i<=j){
            cout<<n-(j-1)<<" ";
            j=j-1;
        }
        int star=2;
        while(star<=i){
            cout<<'*'<<" ";
            star=star+1;
        }
        int str=2;
        while(str<=i){
            cout<<'*'<<" ";
            str=str+1;
        }
        int row=n;
        
        while(row>=i){
            cout<<n-j<<" ";
            j=j+1;
            row=row-1;
        }
       
        
        
        
        cout<<endl;
    i=i+1;
    }
    
}