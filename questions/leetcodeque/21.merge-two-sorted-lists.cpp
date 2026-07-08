
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

Node* mergeTwoLists(Node* list1, Node* list2) {
        Node * dummy=new Node(0);
        Node * temp=dummy;
        Node* t1=list1;
        Node* t2=list2;
        while(t1!=NULL && t2!=NULL){
            if(t1->data<=t2->data){
                temp->next=t1;
                t1=t1->next;
                temp=temp->next;
            }
            else{
                temp->next=t2;
                t2=t2->next;
                temp=temp->next;
            }
        }
        while(t1!=NULL){
            temp->next=t1;
            t1=t1->next;
            temp=temp->next;
        }
        while(t2!=NULL){
            temp->next=t2;
            t2=t2->next;
            temp=temp->next;
        }
        return dummy->next;

        
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

    Node* head1 = NULL;
    Node* tail1 = NULL;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head1 == NULL){
            head1 =tail1 = newNode;
        }
        else{
            tail1->next = newNode;
            tail1 = newNode;
        }
    }
    int m;
    cin>>m;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head2 == NULL){
            head2 =tail2 = newNode;
        }
        else{
            tail2->next = newNode;
            tail2 = newNode;
        }
    }
    Node*head=mergeTwoLists(head1,head2);
    printList(head);

    return 0;
}
    


