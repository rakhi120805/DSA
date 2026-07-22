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
13    ListNode * split(ListNode *head){
14        ListNode * fast=head;
15        ListNode * slow=head;
16        while(fast!=NULL && fast->next!=NULL){
17            fast=fast->next->next;
18            if(fast!=NULL){
19                slow=slow->next;
20            }
21        }
22        ListNode * right=slow->next;
23        slow->next=NULL;
24        return right;
25    }
26    ListNode* merge(ListNode * left,ListNode * right){
27        // if(left==NULL)return right;
28        // if(right==NULL)return left;
29        ListNode* dummy=new ListNode(0);
30        ListNode * temp=dummy;
31
32        while(left!=NULL && right!=NULL){
33            if(left->val<right->val){
34                temp->next=left;
35                temp=temp->next;
36                left=left->next;
37            }
38            else{
39                temp->next=right;
40                temp=temp->next;
41                right=right->next;
42
43            }
44        }
45        while(left!=NULL){
46            temp->next=left;
47            temp=temp->next;
48            left=left->next;
49        }
50        while(right!=NULL){
51            temp->next=right;
52            temp=temp->next;
53            right=right->next;            
54        }
55            // if(left->val<right->val){
56            //     left->next=merge(left->next,right);
57            //     return left;
58            // }
59            // else{
60            //     right->next=merge(left,right->next);
61            //     return right;
62            // }
63        return dummy->next;
64        
65    }
66    ListNode* sortList(ListNode* head) {
67        if(head==NULL || head->next==NULL){
68            return head;
69        }
70        ListNode * right=split(head);
71        head=sortList(head);
72        right=sortList(right);
73        return merge(head,right);
74    }
75};