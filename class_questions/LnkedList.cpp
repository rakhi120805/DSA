#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

class deque1{
    public:
    Node * head;
    Node * tail;
    
    deque1(){
        head=tail=NULL;
    }
    bool empty(){
        if(head== NULL && tail==NULL)return true;
        return false;
    }
    int front(){
        int ans=0;
        if(!empty()){
            ans=head->data;
        }
        return ans;
    }
    int back(){
        int ans=0;
        if(!empty()){
            ans=tail->data;
        }
        return ans;
    }
    void insertAtFront(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void push_back(int data){
        Node* newNode=new Node(data);
        if(tail==NULL){
            head=tail=newNode;
        }
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        Node * temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
    }

    void pop_back(){
        Node *temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
    }
    void display(){
        Node* temp=head;
        while(temp->next!= NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
    }

};

int main(){
    int n;
    cin>>n;
    deque1 dq;
    while(n>0){
        int data;
        cin>>data;
        dq.push_back(data);
        n--;
    }
    dq.display();
    cout<<endl;
    dq.pop_back();
    dq.display();


}