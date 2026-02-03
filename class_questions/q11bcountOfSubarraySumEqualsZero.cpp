#include <bits/stdc++.h>
using namespace std;
    int subarraySum(vector<int>& nums) {
      unordered_map<int,int>mpp;
      int sum=0;
      int cnt=1;
      int n=nums.size();
      for(int i=0;i<n;i++){
        sum=sum + nums[i];
        if(mpp.find(sum)!= mpp.end()){
            count=count+[re/m]++;
        }
        mpp[sum]=i;
      }
      return cnt;
    }