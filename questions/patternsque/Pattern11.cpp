#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ch='A';
    while(i<=n){
        int j=0;
        
        while(j<n){
            char a=ch+j;
            cout<<a<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}