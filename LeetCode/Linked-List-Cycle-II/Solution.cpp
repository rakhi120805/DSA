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
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow=head;
13        ListNode* fast=head;
14        while(fast && fast->next){
15            slow=slow->next;
16            fast=fast->next->next;
17            if(fast==slow)break;
18        }
19        if(fast==NULL || fast->next==NULL)return NULL;
20
21        slow=head;
22        while(fast!=slow){
23            slow=slow->next;
24            fast=fast->next;
25        }
26        return slow;
27
28    }
29};