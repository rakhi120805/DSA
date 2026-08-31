1class SegmentTree {
2public:
3    vector<int> segmentTree;
4    bool isMinTree;
5
6    SegmentTree(vector<int>& nums, bool flag) {
7        int n = nums.size();
8        this->isMinTree = flag;
9
10        segmentTree.resize(4 * n);
11
12        buildSegmentTree(0, 0, n - 1, nums);
13    }
14
15    void buildSegmentTree(int i, int l, int r, vector<int>& nums) {
16        if (l == r) {
17            segmentTree[i] = nums[l];
18            return;
19        }
20
21        int mid = l + (r - l) / 2;
22
23        buildSegmentTree(2 * i + 1, l, mid, nums);
24        buildSegmentTree(2 * i + 2, mid + 1, r, nums);
25
26        if (isMinTree) {
27            segmentTree[i] = min(segmentTree[2 * i + 1], segmentTree[2 * i + 2]);
28        } else {
29            segmentTree[i] = max(segmentTree[2 * i + 1], segmentTree[2 * i + 2]);
30        }
31    }
32
33    int querySegmentTree(int start, int end, int i, int l, int r) {
34        //No overlap
35        if (l > end || r < start) {
36            return isMinTree ? INT_MAX : INT_MIN;
37        }
38
39        //Complete Overlap
40        if (l >= start && r <= end) {
41            return segmentTree[i];
42        }
43
44        int mid = l + (r - l) / 2;
45
46        int a = querySegmentTree(start, end, 2 * i + 1, l, mid);
47        int b = querySegmentTree(start, end, 2 * i + 2, mid + 1, r);
48
49        if (isMinTree) {
50            return min(a, b);
51        }
52
53        return max(a, b);
54    }
55
56    int query(int l, int r, int n) {
57        return querySegmentTree(l, r, 0, 0, n - 1);
58    }
59};
60
61class Solution {
62public:
63    typedef long long ll;
64
65    ll getValue(int l, int r, SegmentTree& minST, SegmentTree& maxST, int n) {
66        int minEl = minST.query(l, r, n);
67        int maxEl = maxST.query(l, r, n);
68
69        return (ll)maxEl - minEl;
70    }
71
72    long long maxTotalValue(vector<int>& nums, int k) {
73        int n = nums.size();
74
75        SegmentTree minST(nums, true);   //true is for minimum
76        SegmentTree maxST(nums, false);  //false is for maximum
77
78        //{val, l, r} max. heap
79        priority_queue<tuple<ll, int, int>> pq;
80
81        //Step-1 (Initialize the heap with best value)
82        //O(n*logn)
83        for (int l = 0; l < n; l++) {  //l to n-1
84            ll value = getValue(l, n - 1, minST, maxST, n);  //log(n)
85            pq.push({value, l, n - 1});
86        }
87
88        //Step-2 Find top k
89        ll result = 0;
90        //O(k * log(n))
91        while (k--) {
92            auto [value, l, r] = pq.top();
93            pq.pop();
94
95            result += value;
96
97            ll nextBestValue = getValue(l, r - 1, minST, maxST, n);  //log(n)
98
99            pq.push({nextBestValue, l, r - 1});  //log(n)
100        }
101
102        return result;
103    }
104};