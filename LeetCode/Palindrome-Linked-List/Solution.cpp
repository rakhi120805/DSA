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
16
17        while(fast && fast->next){
18            fast=fast->next->next;
19            if(fast){
20                slow=slow->next;
21            }
22        }
23        ListNode *right=slow->next;
24        slow->next=NULL;
25        return right;
26    }
27    ListNode *reverse(ListNode *head){
28        
29        ListNode *curr=head;
30
31        ListNode *prev=NULL;
32        ListNode*n=NULL;
33        while(curr!=NULL){
34            n=curr->next;
35            // int ans=(n!=NULL?n->val:0);
36            // cout<<"The next value: "<<ans<<" ";
37            curr->next=prev;
38            // cout<<curr->next;
39            // cout<<curr->val<<" ";
40            prev=curr;            
41            // cout<<prev->val<<" ";
42            curr=n;
43            // int ans2=(curr!=NULL?curr->val:0);
44            // cout<<ans2<<" ";
45            // cout<<curr->val<<" ";
46        }
47        return prev;
48    }
49    bool isPalindrome(ListNode* head) {
50        if(head==NULL || head->next == NULL)return true;
51        ListNode *right=split(head);
52        right=reverse(right);
53        // cout<<"the right value after reverse: "<<right->val<<endl;
54        bool ans=true;
55        while(head!=NULL && right!=NULL){
56            if(head->val!=right->val){
57                ans=false;
58            }
59            head=head->next;
60            right=right->next;
61        }
62return ans;
63        
64    }
65};