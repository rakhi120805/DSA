1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>>ans;
16        if(root==NULL)return ans;
17        queue<TreeNode*>q;
18        q.push(root);
19        
20        
21        
22        while(!q.empty()){
23            int s=q.size();
24            vector<int>v;
25            while(s){
26                TreeNode * top=q.front();
27                if(top!=NULL)v.push_back(top->val);
28                q.pop();
29                
30                if(top->left)q.push(top->left);
31                if(top->right)q.push(top->right);
32                s--;
33            }
34        ans.push_back(v);
35
36        }
37        return ans;
38    }
39};