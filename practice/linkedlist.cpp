#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        int data = 0;
        Node* next = NULL;
    }
    Node(int data){
        this ->data=data;
        this ->next = NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;

}
void insertatstart(Node* &head,int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head=temp;
}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail ->next=temp;
    tail=tail -> next;
}
void insertatposition(Node* &tail,Node* &head,int pos,int d){
    if(pos == 1){
        insertatstart(head,d);
        return;
    }
    else if()
}
int main(){
    Node* node1=new Node(12);
    Node* head=node1;
    Node* tail=node1;
    insertatstart(head,10);
    insertattail(tail,15);
    print(head);
    return 0;
}