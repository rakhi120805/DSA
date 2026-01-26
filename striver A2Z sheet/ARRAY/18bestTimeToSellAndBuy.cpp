#include <bits/stdc++.h>
using namespace std;

int buyAndSellStocks(vector<int>&arr){
    int mini=arr[0];
    int n=arr.size();
    int cost=0;
    int profit=0;
    int prev_profit=0;
    int best_time_to_sell=0;

    for(int i=1;i<n;i++){
        cost=arr[i] - mini;
        profit=max(profit,cost);
        if(prev_profit<profit){
            best_time_to_sell=arr[i];
        }
        prev_profit=profit;
        mini=min(mini,arr[i]);
    }
    cout<<"Best time to buy Stocks : "<<mini<<endl;
    cout<<"Best time to sell Stocks : "<<best_time_to_sell<<endl;

    return profit;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=buyAndSellStocks(arr);
    cout<<ans;
    return 0;

}