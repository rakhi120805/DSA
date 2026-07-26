1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        if(head==NULL || head->next==NULL)return false;
13        ListNode *fast=head;
14        ListNode *slow=head;
15        
16        while(fast!=NULL && fast->next!=NULL){
17            slow=slow->next;
18            fast=fast->next->next;
19            if(fast==slow)return true;
20        }
21        return false;
22    }
23};