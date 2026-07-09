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
13    ListNode * reverse(ListNode *head,int k){
14        ListNode * prev=NULL;
15        ListNode * next=NULL;
16        ListNode *curr=head;
17         while( curr!=NULL && k){
18                next=curr->next;
19                curr->next=prev;
20                prev=curr;
21                curr=next;
22                k--;
23            }
24            return prev;
25
26    }
27    ListNode* reverseKGroup(ListNode* head, int k) {
28        ListNode * dummy=new ListNode(0);
29        dummy->next=head;
30        ListNode *temp=dummy;
31        int n=k;
32        while(true){
33            ListNode *end=temp;
34            for(int i=0;i<n && end!=NULL;i++){
35                end=end->next;
36            }
37            if(!end)break;
38            ListNode * start=temp->next;
39            ListNode * next=end->next;
40            end->next=NULL;
41            temp->next=reverse(start,k);
42            start->next=next;
43
44            temp=start;
45
46        }
47        
48        
49        // if(head==NULL)return {};
50        // while(head!=NULL){
51        //     ListNode *check = head;
52        //     int count = 0;
53
54        //     while(check != NULL && count < k){
55        //     check = check->next;
56        //     count++;
57        //     }
58
59        //     if(count < k){
60        //         break;  
61            
62        //     }
63
64        //     int n=k;
65           
66        //     temp->next=prev;
67        //     prev=head;
68        //     temp=head;
69        //     head->next=next;
70        //     head=head->next;
71            
72        // }
73        return dummy->next;
74    }
75};