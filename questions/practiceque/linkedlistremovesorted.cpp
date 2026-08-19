#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

Node * remove(Node * head){
    if(head->next == NULL)return head;
    Node * curr=head;
    Node * dummy=new Node (0);
    Node *temp=dummy;
    unordered_map<int,int>mpp;

    while(curr->next!=NULL){
        if(curr->val!=curr->next->val && mpp.find(curr->val)==mpp.end()){
            temp->next=curr;
            temp=temp->next;
            
        }
        mpp[curr->val]++;
        curr=curr->next;
    }
    // temp->next=NULL;
    return dummy->next;
}


void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
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
    Node * newnode=remove(head);
    

    
    printList(newnode);

    return 0;
}