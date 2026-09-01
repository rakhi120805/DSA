1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int mini=prices[0];
5        int profit=0;
6        int maxi=INT_MIN;
7        for(int i=1;i<prices.size();i++){
8            mini=min(prices[i],mini);
9            profit=prices[i]-mini;
10            maxi=max(profit,maxi);
11        }
12        return (maxi==INT_MIN)?0:maxi;
13    }
14};