
#include<bits/stdc++.h>
using namespace std;



class Node{
    public:
    int key,val;
    Node * next;
    Node * prev;
    Node(int key,int val){
        this->key=key;
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
class LRUCache {
public:
    int capacity;
    Node * head=new Node(-1,-1);
    Node * tail=new Node(-1,-1);
    LRUCache(int capacity) {
        this->capacity=capacity;
        head->next=tail;
        tail->prev=head;
    }
    unordered_map<int,Node *>mpp;
    void add(Node * node){
        Node * temp=tail->prev;
        tail->prev->next=node;
        tail->prev=node;
        node->next=tail;
        node->prev=temp;
        // delete temp;
    }
    void remove(Node *node){
        // Node* temp=node;
        node->prev->next=node->next;
        node->next->prev=node->prev;
        node->prev=NULL;
        node->next=NULL;
        // delete temp;

    }
    
    int get(int key) {
        if(mpp.find(key)==mpp.end()) return -1;
        else{
            remove(mpp[key]);
            add(mpp[key]);
            return mpp[key]->val;
        }
        return 0;
    }
    
    void put(int key, int val) {
        if(mpp.find(key)!=mpp.end()){
            remove(mpp[key]);
            Node *node=mpp[key];
            node->val=val;
            add(node);
            return;
        }
        Node *newnode=new Node(key,val);
        if(mpp.size()==capacity){
            Node *temp=head->next;
            mpp.erase(temp->key);
            remove(temp);
            delete temp;
            add(newnode);
            mpp[key]=newnode;
        }
        else{
             add(newnode);
             mpp[key]=newnode;
        }

        // Node * head=new Node(key,val);
        // cout<<head->key<<" "<<head->val;
        // add(key);
    }
};



void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    printList(head);

    return 0;
}
