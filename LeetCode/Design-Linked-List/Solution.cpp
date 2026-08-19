1class Node{
2    public:
3    int x;
4    Node* next;
5    Node* prev;
6    Node(int val){
7        this->x=val;
8        this->next=NULL;
9      
10    }
11}; 
12class MyLinkedList {
13public:
14    Node* head;
15                                                      
16    MyLinkedList() {
17        head=NULL;
18        
19    }
20    
21    int get(int index) {
22        if(index==0 && head!=NULL)return head->x;
23        
24        int cnt=0;
25        Node* temp=head;
26        while(temp){
27            if(cnt==index)return temp->x;
28            cnt++;
29            temp=temp->next;
30            
31        }
32        return -1;
33        
34    }
35    
36    void addAtHead(int val) {
37        Node* newnode=new Node(val);
38        if(head==NULL){
39            head=newnode;
40            return;
41        }
42        newnode->next=head;
43     
44        head=newnode;
45        return;
46        
47    }
48    
49    void addAtTail(int val) {
50        Node* newnode=new Node(val);
51        if(head==NULL){
52            head=newnode;
53            return;
54        }
55        Node* curr=head;
56        while(curr->next!=NULL){
57            curr=curr->next;
58        }
59        curr->next=newnode;
60        return;          
61    }
62    
63    void addAtIndex(int index, int val) {
64        Node* newnode=new Node(val);
65        int cnt=0;
66
67        if(head==NULL){
68            if(index==0){
69                head=newnode;
70                return;
71            }
72            else{
73                return;
74            }
75        }
76
77        if(index==0){
78            newnode->next=head;
79            head=newnode;
80            return;
81        }
82
83        Node* temp=head;
84        Node* prev=NULL;
85        while(temp){
86            prev=temp;
87            temp=temp->next;
88            cnt++;
89            if(cnt==index){
90                prev->next=newnode;
91                newnode->next=temp;
92                return;
93            }
94        }
95    return;
96    }
97    
98    void deleteAtIndex(int index) {
99       if(head==NULL)return;
100        Node* temp=head;
101        if(index==0){
102            head=head->next;
103            delete(temp);
104            return;
105        }
106        int cnt=0;
107        Node* prev=NULL;
108        while(temp){
109             if(cnt==index){
110                prev->next=prev->next->next;
111                delete(temp);
112                return;
113            }
114            prev=temp;
115            temp=temp->next;
116            cnt++;
117           
118
119        }
120        return ;
121    }
122};
123
124/**
125 * Your MyLinkedList object will be instantiated and called as such:
126 * MyLinkedList* obj = new MyLinkedList();
127 * int param_1 = obj->get(index);
128 * obj->addAtHead(val);
129 * obj->addAtTail(val);
130 * obj->addAtIndex(index,val);
131 * obj->deleteAtIndex(index);
132 */