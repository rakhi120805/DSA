1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int low = 0;
5        int high = nums.size() - 1;
6
7        while (low < high) {
8            int mid = low + (high - low) / 2;
9
10            if (nums[mid] > nums[high]) {
11                low = mid + 1;
12            }
13            else if (nums[mid] < nums[high]) {
14                high = mid;
15            }
16            else {
17                high--;
18            }
19        }
20
21        return nums[low];
22    }
23};