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
14    vector<int> preorderTraversal(TreeNode* root) {
15        vector<int>v;
16        if(root==NULL) return v;
17        v.push_back(root->val);
18      
19        vector<int> left = preorderTraversal(root->left);
20        vector<int> right = preorderTraversal(root->right);
21
22        v.insert(v.end(), left.begin(), left.end());
23        v.insert(v.end(), right.begin(), right.end());
24        return v;
25    }
26};