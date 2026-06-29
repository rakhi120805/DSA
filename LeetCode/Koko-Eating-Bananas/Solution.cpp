1class Solution {
2public:
3    bool canEat(vector<int>&piles,int h,long long mini){
4        long long time=0;
5        for(int i=0;i<piles.size();i++){
6            time+= (ceil)((long double)piles[i] / mini); 
7            // cout<<time<<" for mini "<<mini<<endl;
8            
9        }
10        if(time>h)return false;
11
12        return true;
13    }
14    int minEatingSpeed(vector<int>& piles, int h) {
15        int low=1;
16        int high=*max_element(piles.begin(),piles.end());
17        long long ans=0;
18        while(low<=high){
19            long long mid=low+(high - low)/2;
20            if(canEat(piles,h,mid)){
21                ans=mid;
22                high=mid-1;
23            }
24            else{
25                low=mid+1;
26            }
27        }
28        return (int)ans;
29    }
30};