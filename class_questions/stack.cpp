#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class stack{
    public:
    Node * head;
    int size;
    stack(){
        this->size=0;
        this->head=NULL;
    }
    bool isempty(){
        if(size==0 || head==NULL){
            return true;
        }
        return false;
    }
    
    void push(int data){
        size++;
        if(head == NULL){
            Node * newnode=new Node(data);
            head=newnode;
            return;
        }
        Node *newnode=new Node(data);
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
    int pop(){
        if(isempty()){
            cout<<"stack is empty";
            return -1;
        }
        int val=head->data;
        Node * temp=head;
        head=head->next;
        delete temp;
        return val;
    }
    int top(){
        if(head==NULL){
            return 0;
        }
        else{
            return head->data;
        }
    }  

};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(6);
    int last=st.pop();
    cout<<last;
    st.top();


}