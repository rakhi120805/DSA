#include <iostream>
using namespace std;
int main(){
    char a = 65;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<a <<" ";
            j=j+1;
        }
        cout<<endl;
        a=a+1;
        i=i+1;
    }

}