1class Solution {
2public:
3    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
4        int n = nums1.size();
5        
6        vector<pair<int,int>> vec(n);
7        
8        for(int i = 0; i<n; i++) {
9            vec[i] = {nums1[i], nums2[i]};
10        }
11        
12        auto lambda = [&](auto &P1, auto &P2) {
13            return P1.second > P2.second;
14        };
15        
16        sort(begin(vec), end(vec), lambda);
17        
18        priority_queue<int, vector<int>, greater<int>> pq; //min_heap
19        
20        long long Ksum = 0;
21        
22        for(int i = 0; i<=k-1; i++) {
23            
24            Ksum += vec[i].first;
25            pq.push(vec[i].first);
26            
27        }
28        
29        long long result = Ksum * vec[k-1].second;
30        
31        for(int i = k; i<n; i++) {
32            
33            //taking minimum as vec[i].second
34            Ksum += vec[i].first - pq.top();
35            pq.pop();
36            
37            pq.push(vec[i].first);
38            
39            result = max(result, Ksum * vec[i].second);
40            
41        }
42        
43        return result;
44    }
45};