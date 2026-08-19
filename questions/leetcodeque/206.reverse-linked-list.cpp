

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

 Node* reverseList(Node* head) {
     Node * curr=head;
     Node* n=curr->next;
     Node * prev=NULL;
     while(curr->next!=NULL){
        curr->next=prev;
        prev=curr;
        curr=n;
        n=curr->next;

     }  
     curr->next=prev;
    //  n->next=NULL; 
     return curr;
    }

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
    cout<<"After reverse:"<<endl;
    Node * nl=reverseList(head);
    printList(nl);

    return 0;
}

