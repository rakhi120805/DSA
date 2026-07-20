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
14    TreeNode* insertIntoBST(TreeNode* root, int val) {
15        TreeNode* newnode=new TreeNode(val);
16    
17        if(!root)return newnode;
18
19        if(val>root->val){
20            root->right=insertIntoBST(root->right,val);
21        }
22        else if(val<root->val ){
23            root->left=insertIntoBST(root->left,val);
24        }
25        return root;
26    }
27};