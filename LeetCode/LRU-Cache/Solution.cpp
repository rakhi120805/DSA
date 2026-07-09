1class Node{
2    public:
3    int key,val;
4    Node * next;
5    Node * prev;
6    Node(int key,int val){
7        this->key=key;
8        this->val=val;
9        this->next=NULL;
10        this->prev=NULL;
11    }
12
13};
14class LRUCache {
15public:
16    int capacity;
17    Node * head=new Node(-1,-1);
18    Node * tail=new Node(-1,-1);
19    LRUCache(int capacity) {
20        this->capacity=capacity;
21        head->next=tail;
22        tail->prev=head;
23    }
24    unordered_map<int,Node *>mpp;
25    void add(Node * node){
26        Node * temp=tail->prev;
27        tail->prev->next=node;
28        tail->prev=node;
29        node->next=tail;
30        node->prev=temp;
31        // delete temp;
32    }
33    void remove(Node *node){
34        // Node* temp=node;
35        node->prev->next=node->next;
36        node->next->prev=node->prev;
37        node->prev=NULL;
38        node->next=NULL;
39        // delete temp;
40
41    }
42    
43    int get(int key) {
44        if(mpp.find(key)==mpp.end()) return -1;
45        else{
46            remove(mpp[key]);
47            add(mpp[key]);
48            return mpp[key]->val;
49        }
50        return 0;
51    }
52    
53    void put(int key, int val) {
54        if(mpp.find(key)!=mpp.end()){
55            remove(mpp[key]);
56            Node *node=mpp[key];
57            node->val=val;
58            add(node);
59            return;
60        }
61        Node *newnode=new Node(key,val);
62        if(mpp.size()==capacity){
63            Node *temp=head->next;
64            mpp.erase(temp->key);
65            remove(temp);
66            delete temp;
67            add(newnode);
68            mpp[key]=newnode;
69        }
70        else{
71             add(newnode);
72             mpp[key]=newnode;
73        }
74
75        // Node * head=new Node(key,val);
76        // cout<<head->key<<" "<<head->val;
77        // add(key);
78    }
79};
80
81/**
82 * Your LRUCache object will be instantiated and called as such:
83 * LRUCache* obj = new LRUCache(capacity);
84 * int param_1 = obj->get(key);
85 * obj->put(key,value);
86 */