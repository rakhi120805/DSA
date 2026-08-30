1class Solution {
2public:
3    typedef pair<char,int>P;
4    string frequencySort(string s) {
5        vector<P>v(123);
6        for(char &ch:s){
7            int freq=v[ch].second;
8            v[ch]={ch,freq+1};
9        }
10        auto lambda=[&](P &P1,P &P2){return P1.second>P2.second;};
11        sort(v.begin(),v.end(),lambda);
12        string res="";
13
14
15        for(int i=0;i<v.size();i++){
16            if(v[i].second>0){
17                char c=v[i].first;
18                int freq=v[i].second;
19                string a=string(freq,c);
20                res+=a;
21            }
22
23        }
24    
25        return res;
26
27
28
29        // map<char,int>mpp;
30        // for(int i=0;i<s.size();i++){
31        //     mpp[s[i]]++;
32        // }
33        // vector<pair<char,int>>v;
34        // for(auto it:mpp){
35        //     v.push_back({it.first,it.second});
36        // }
37        // for(auto it:v){
38        //     cout<<it.first<<" "<<it.second;
39        // }
40
41        // string ans;
42        // sort(v.begin(),v.end(),[](auto &a,auto &b){
43        //     return a.second>b.second;
44        // });
45        // for(auto it:v){
46        //     while(it.second--){
47        //         ans+=it.first;
48        //     }
49            
50        // }
51
52        // return ans;
53
54        
55    }
56};