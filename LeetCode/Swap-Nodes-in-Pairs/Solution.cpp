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
13    ListNode* swapPairs(ListNode* head) {
14        ListNode * dummy=new ListNode(0);
15        if(head == NULL || head->next == NULL){
16            return head;
17        }
18        dummy->next=head;
19        ListNode * prev=dummy;
20 
21        while(prev->next!=NULL && prev->next->next!=NULL){
22        ListNode *first=prev->next;
23
24        ListNode *second=prev->next->next;
25            first->next = second->next;
26            second->next=first;
27            
28            prev->next=second;
29            prev=first;
30        }
31        return dummy->next;
32    }
33    
34};