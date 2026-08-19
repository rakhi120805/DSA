
#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode * next;
    ListNode(int val){
        this->data=val;
        this->next=NULL;
    }
};

    void insertAtHead(int data) {
        
        
        // Step 1: Create a new node dynamically
        ListNode * newNode = new ListNode(data);
        // Step 2: Point new node's next to the current head
        newNode->next = head;
        // Step 3: Update head to point to the new node
        head = newNode;
    }

bool hasCycle(ListNode *head) {
         ListNode *fast=head;
        ListNode *slow=head;
        while(fast!= slow){
            if(fast==NULL)return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
        
    }

int main(){
    ListNode * head=new ListNode(5);


}


