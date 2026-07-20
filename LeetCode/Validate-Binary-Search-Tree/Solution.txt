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
14    bool check(TreeNode *root,TreeNode* min,TreeNode* max){
15        if(!root)return true;
16        // if(min == NULL && max == NULL)return true;
17        if((max!=NULL && root->val>=max->val) || (min!=NULL && root->val<=min->val) )return false;
18        // if(root->right==NULL || root->right->val<=root->val || root->right->val>=max)return false;
19        bool leftval=check(root->left,min,root);
20        bool rightval=check(root->right,root,max);
21        return leftval && rightval;
22
23    }
24    bool isValidBST(TreeNode* root) {
25        
26        
27        if(!root)return true;
28        
29        bool ans=check(root,NULL,NULL);
30
31
32        return ans;
33    }
34};