#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node*prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

class queue{
    public:
    Node *head = NULL;
    Node *tail=NULL;
    int front(){
        if(head==NULL){
            cout<<"queue is empty!!";
            return -1;
        }
        else{
            return head->data;
        }
    }

    int size(){
        Node * s=head;
        int count=0;
        while(s!=NULL){
            count++;
            s=s->next;
        }
        return count;
    }
    void push(int val){
        Node*temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    int pop(){
        if(head==NULL){
            cout<<"queue is empty!!";
            return -1;
        }
        else{
            Node * t=head;
            head=head->next;
            delete t;
        }
    }
    bool empty(){
        if(head == NULL){
            return true;
        }
        return false;
    }



};

int main(){
    queue q;
    q.push(1);
    cout<<q.front()<<endl;
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}