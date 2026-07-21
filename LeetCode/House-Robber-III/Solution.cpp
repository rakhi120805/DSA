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
14    pair<int,int> check(TreeNode * root){
15        if(root==NULL)return {0,0};
16
17        
18
19        pair<int,int>leftv=check(root->left);
20        pair<int,int>rightv=check(root->right);
21
22        int picked=root->val + leftv.second + rightv.second;
23        int skip=max(leftv.first,leftv.second)+ max(rightv.first,rightv.second);
24
25        return {picked,skip};
26
27
28    }
29    int rob(TreeNode* root) {
30        pair<int,int>ans=check(root);
31        return max(ans.first,ans.second);
32
33        
34    }
35};