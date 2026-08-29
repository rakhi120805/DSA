1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head==NULL || head->next==NULL)return NULL;
15         ListNode* slow=head;
16         ListNode* fast=head;
17         while(fast!=NULL && fast->next!=NULL){
18            slow=slow->next;
19            fast=fast->next->next;
20         }
21         ListNode* temp=head;
22         while(temp->next!=slow && temp->next!=NULL){
23            temp=temp->next;
24         }
25         
26         temp->next=slow->next;
27         delete(slow);
28         
29         return head;
30    }
31};