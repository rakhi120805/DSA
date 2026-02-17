// #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node*prev;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };

// class queue{
//     public:
//     Node *head = NULL;
//     Node *tail=NULL;
//     int front(){
//         if(head==NULL){
//             cout<<"queue is empty!!";
//             return -1;
//         }
//         else{
//             return head->data;
//         }
//     }

//     int size(){
//         Node * s=head;
//         int count=0;
//         while(s!=NULL){
//             count++;
//             s=s->next;
//         }
//         return count;
//     }
//     void push(int val){
//         Node*temp=new Node(val);
//         if(head==NULL){
//             head=temp;
//             tail=temp;
//         }
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//     }
//     int pop(){
//         int s=size();
//         if(head==NULL){
//             cout<<"queue is empty!!";
//             return -1;
//         }
//         else{
//             Node * t=head;
//             head=head->next;
//             delete t;
//         }
//         s--;
        
//     }
//     bool empty(){
//         if(head == NULL){
//             return true;
//         }
//         return false;
//     }

// };


#include<bits/stdc++.h>
using namespace std;


class stackk{
    public:
    queue<int>q;
    void reverse(){
        if(q.empty()){
            return;
        }
        int temp=q.front();
        q.pop();
        reverse();
        q.push(temp);

    }
    
    bool empty(){
        if(q.empty())return true;
        return false;
    }
    void push(int val){
        // if(q.empty()){
            // q.push(val);
        // }
        reverse();
        q.push(val);
        reverse();
    }
    int pop(){
        if(q.empty())return -1;
        int t=q.front();
        q.pop();
        return t;
    }
    int top(){
        if(q.empty())return -1;
        return q.front();
    }


};

int main(){
    stackk st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.pop();
    cout<<st.top();
}