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
14    int maxd(TreeNode * root){
15        if(root==NULL)return 0;
16        int l=maxd(root->left);
17        int r=maxd(root->right);
18        return max(l,r)+1;
19    }
20    vector<vector<int>> levelOrderBottom(TreeNode* root) {
21        int s=maxd(root);
22        vector<vector<int>>v;
23        if(root==NULL)return v;
24        stack<vector<TreeNode*>>st;
25        vector<TreeNode*>level;
26        level.push_back(root);
27        st.push(level);
28        while(st.size()!=s){
29            vector<TreeNode *>t=st.top();
30            vector<TreeNode *>w;
31            for(int i=0;i<t.size();i++){
32                TreeNode * r=t[i];
33                
34                if(r->left) w.push_back(r->left);
35                if(r->right) w.push_back(r->right);
36            }  
37            st.push(w);
38        }
39        
40        vector<vector<int>>ans;
41        while(!st.empty()){
42            vector<TreeNode *>a=st.top();  
43            st.pop();
44            vector<int>b;  
45            for(auto it:a){
46                b.push_back(it->val);
47            }
48            ans.push_back(b);
49        }
50        return ans;
51    }
52};