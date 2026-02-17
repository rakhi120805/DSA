#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class stack{
    public:
    Node * head;
    int size;
    stack(){
        this->size=0;
        this->head=NULL;
    }
    bool isempty(){
        if(size==0 || head==NULL){
            return true;
        }
        return false;
    }
    
    void push(int data){
        size++;
        if(head == NULL){
            Node * newnode=new Node(data);
            head=newnode;
            return;
        }
        Node *newnode=new Node(data);
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
    int pop(){
        if(isempty()){
            cout<<"stack is empty";
            return -1;
        }
        int val=head->data;
        Node * temp=head;
        head=head->next;
        size--;
        if(head!=NULL)head->prev=NULL;
        delete temp;
        return val;
    }
    int top(){
        if(head==NULL){
            return -1;
        }
        else{
            return head->data;
        }
    }  

};

vector<int> nearestSmallest(vector<int>&arr){
    stack st;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        while(!st.isempty() && arr[i]<=st.top()){
            st.pop();
        }
        if(st.isempty())ans.push_back(-1);
        else{
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return ans;
}
vector<int> nearestGreater(vector<int>&arr){
    stack st;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
    while(!st.isempty() && arr[i]>=arr[st.top()]){
        st.pop();
    }
    if(st.isempty()){
        ans.push_back(-1);
        st.push(i);
    }
    else{
        ans.push_back(st.top());
        st.push(i);
    }
    }
    return ans;
}
//         if(st.isempty()){
//             ans.push_back(-1);
//             st.push(arr[i]);
//         }
//         else{
//             if(arr[i]>st.top()){
//                 int a=st.top();
//                 ans.push_back(a);
//                 st.push(arr[i]);
//             }
//             else{
//             while(!st.isempty() && arr[i]<=st.top()){
//                 st.pop();
//             }
//             if(st.isempty())ans.push_back(-1);
//             else{
//                 st.push(arr[i]);
//                 ans.push_back(st.top());
//             }
//             }
//         }


//     }
//     return ans;
// }
    




int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;

    ans=nearestSmallest(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>Greater;
    Greater=nearestGreater(arr);
    for(auto it:Greater){
        cout<<it<<" ";
    }
    return 0;

}