1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        priority_queue<long, vector<long>, greater<long>> pq(begin(nums), end(nums)); //Heapify - log(n)
5
6        int count = 0;
7
8        while(!pq.empty() && pq.top() < k) {
9            long smallest = pq.top(); //minimum
10            pq.pop();
11
12            long secondSmallest = pq.top(); //max
13            pq.pop();
14
15            pq.push(smallest*2 + secondSmallest);
16
17            count++;
18        }
19
20        return count;
21
22    }
23};
24