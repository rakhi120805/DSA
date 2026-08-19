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

Node* reverseKGroup(Node* head, int k) {
    Node * n=NULL;
    Node * prev=NULL;
    Node* curr=head;

    
    while(curr!=NULL){
        int cnt=1;

        while(cnt<=k){
            
        }

    }

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

    return 0;
}

