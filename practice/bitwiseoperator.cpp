#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a&b;
    int d=a|b;
    int x=~a;
    int y=a^b;
    cout<<c<<endl<<d<<endl<<x<<endl<<y;
}