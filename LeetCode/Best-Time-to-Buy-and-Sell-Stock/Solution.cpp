1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4       int mini=prices[0];
5       int profit=0;
6       for(int i=1;i<prices.size();i++){
7        int cost=prices[i] - mini;
8        profit=max(profit,cost);
9        mini=min(mini,prices[i]);
10       }
11       return profit;
12    }
13    
14    
15};