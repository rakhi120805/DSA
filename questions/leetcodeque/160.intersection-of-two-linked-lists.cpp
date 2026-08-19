#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }

};
int length(Node * head){
    Node * curr=head;
    if(head==NULL)return 0;
    int cnt=0;
    while(curr!=NULL){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}
Node *getIntersectionNode(Node *headA, Node *headB) {
        //WAY 1
        int l1=length(headA);
        int l2=length(headB);

        cout<<l1<<" "<<l2;
        return NULL;



}

int main(){
    

}


