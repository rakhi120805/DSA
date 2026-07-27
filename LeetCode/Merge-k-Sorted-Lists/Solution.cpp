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
13    ListNode* merge(ListNode* a, ListNode* b) {
14
15        ListNode dummy(0);
16        ListNode* tail = &dummy;
17
18        while (a && b) {
19
20            if (a->val <= b->val) {
21                tail->next = a;
22                a = a->next;
23            } else {
24                tail->next = b;
25                b = b->next;
26            }
27
28            tail = tail->next;
29        }
30
31        if (a) tail->next = a;
32        else tail->next = b;
33
34        return dummy.next;
35    }
36
37    ListNode* solve(vector<ListNode*>& lists, int l, int r) {
38
39        if (l > r) return NULL;
40
41        if (l == r)
42            return lists[l];
43
44        int mid = l + (r - l) / 2;
45
46        ListNode* left = solve(lists, l, mid);
47        ListNode* right = solve(lists, mid + 1, r);
48
49        return merge(left, right);
50    }
51    ListNode* mergeKLists(vector<ListNode*>& lists) {
52        if (lists.empty()) return NULL;
53
54        return solve(lists, 0, lists.size() - 1);
55    }
56};