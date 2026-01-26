#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character: " <<endl;
    cin>>ch;
    if(ch>=48 && ch<=57){
        cout<< "character is numeric"<<endl;
    }
    else if(ch>=65 && ch<=90){
        cout<<"character is uppercase"<<endl;

    }
    else if(ch>=97 && ch<=122){
        cout<<"character is lowercase"<<endl;
    }
}