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


Node* removeNthFromEnd(Node* head, int n) {
        Node* t1=head;
        Node* t2=head;
        
        Node*temp;
        while(n>0){
            t2=(t2->next!=NULL)?t2->next:t2;
            n--;
        }
        while(t2->next!=NULL){
            t1=t1->next;
            t2=t2->next;
        }

       if(t1->next!=NULL && t1->next->next!=NULL){
        temp=t1->next;
        t1->next=t1->next->next;
       } 
       else t1->next=NULL;
       delete temp;
       return head; 
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
    int x;
    cin>>x;

    removeNthFromEnd(head,x);
    printList(head);

    return 0;
}


