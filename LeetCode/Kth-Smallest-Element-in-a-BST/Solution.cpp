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
14    void inorder(TreeNode* root,vector<int>&arr){
15        if(root==NULL)return ;
16        inorder(root->left,arr);
17        arr.push_back(root->val);
18        inorder(root->right,arr);
19    }
20    int kthSmallest(TreeNode* root, int k) {
21        int cnt=0;
22        vector<int>v;
23        inorder(root,v);
24        int n=v.size();
25        // for(auto it:v)cout<<it<<" ";
26        
27        return v[k-1];
28    }
29};