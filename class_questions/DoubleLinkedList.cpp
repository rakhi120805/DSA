#include<bits/stdc++.h>
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

class LRU{
    public:
    int size=0;
    int capacity;
    unordered_map<int,Node*>mpp;
    Node * head=new Node(-1);
    Node * tail=new Node(-1);
    Node * MRU=NULL;
    Node * LRU=head;
    Node * put(int x){
        if(mpp.find(x)==mpp.end() && size<capacity){
            Node * newnode=new Node(x);
            tail->prev->next=newnode;
            tail->prev=newnode;
            mpp[x]=newnode;
        }
        else{
            MRU=mpp[x];
        }
    }

    Node * remove(Node * node){
        head->next=head->next->next;
        
    }


};
