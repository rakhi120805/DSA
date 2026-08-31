1class Solution {
2public:
3    double mincostToHireWorkers(vector<int>& quality, vector<int>& min_wage, int k) {
4        int n = quality.size();
5
6        vector<pair<double, int>> worker_ratio(n);
7        for(int worker = 0; worker < n; worker++) {
8            worker_ratio[worker] = make_pair((double)min_wage[worker]/quality[worker], quality[worker]);
9        }
10        sort(begin(worker_ratio), end(worker_ratio));
11
12        priority_queue<int, vector<int>> pq;
13        
14        double sum_quality = 0;
15        for(int i = 0; i < k; i++) { 
16            pq.push(worker_ratio[i].second); //push all qualities in max-heap
17            sum_quality += worker_ratio[i].second; //Find sum of qualities
18        }
19
20        double managerRatio = worker_ratio[k-1].first; 
21        double result       = managerRatio * sum_quality;
22
23        for(int manager = k; manager < n; manager++) {
24            
25            managerRatio = worker_ratio[manager].first;
26
27            pq.push(worker_ratio[manager].second); //push all qualities in max-heap
28            sum_quality += worker_ratio[manager].second; //Find sum of qualities
29
30            if(pq.size() > k) {
31                sum_quality -= pq.top();
32                pq.pop();
33            }
34
35            result = min(result, managerRatio*sum_quality);
36
37        }
38
39        return result;
40    }
41};
42