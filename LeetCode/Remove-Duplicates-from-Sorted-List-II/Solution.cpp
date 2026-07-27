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
13    ListNode* deleteDuplicates(ListNode* head) {
14          ListNode dummy(0);
15        dummy.next = head;
16
17        ListNode* prev = &dummy;
18        ListNode* curr = head;
19
20        while (curr) {
21
22            // Check if current value is duplicated
23            if (curr->next && curr->val == curr->next->val) {
24
25                int duplicate = curr->val;
26
27                // Skip all nodes with this value
28                while (curr && curr->val == duplicate)
29                    curr = curr->next;
30
31                prev->next = curr;
32            }
33            else {
34                prev = curr;
35                curr = curr->next;
36            }
37        }
38
39        return dummy.next;
40    }
41};