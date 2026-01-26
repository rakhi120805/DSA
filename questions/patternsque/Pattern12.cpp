#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ch='A';
    
    while(i<=n){
        int j=1;
        while(j<=n){
            char a = ch;
            cout<<a <<" ";
            ch = ch+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;

    }

}