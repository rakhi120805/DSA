1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int>mpp;
5        vector<int>ans;
6        for(int i=0;i<nums2.size();i++){
7            mpp[nums2[i]]=i;
8        }
9        for(int i=0;i<nums1.size();i++){
10            if(mpp.find(nums1[i])!=mpp.end()){
11                for(int j= mpp[nums1[i]];j<nums2.size();j++){
12                    if(j==nums2.size() - 1 && nums1[i]>=nums2[j] )ans.push_back(-1);
13                    if(nums2[j]>nums1[i]){
14                        ans.push_back(nums2[j]);
15                        break;
16                    }
17                }
18            }
19
20        }
21        return ans;
22    }
23};