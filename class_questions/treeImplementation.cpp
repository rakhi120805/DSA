#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};



Node *binaryTree(Node  *root){
    if(root==NULL)return root;

    cout<<root->data<<" ";
    binaryTree(root->left);
    binaryTree(root->right);
    return NULL;
}

int main(){
    int n;
    cin>>n;

}