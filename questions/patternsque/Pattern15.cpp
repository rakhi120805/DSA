#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ch='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char a=ch;
            cout<<a<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}