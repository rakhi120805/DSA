1class Solution {
2public:
3    string largestOddNumber(string num) {
4        int n=num.size();
5        int maxi=INT_MIN;
6        // for(int i=0;i<n;i++){
7        //     for(int j=i;j<n;j++){
8        //         if(num[j]%2!=0)maxi=max(maxi,j-i+1);
9        //     }
10        // }
11        int idx=-1;
12        for(int i=n-1;i>=0;i--){
13            if(num[i]%2!=0){
14                idx=i;
15                break;
16            }
17        }
18        cout<<idx;
19
20        if(idx==-1)return "";
21
22        string s=num.substr(0,idx+1);
23        // for(int i=0;i<=idx;i++){
24        //     s=s+num[i];
25        // }
26        return s;
27
28    }
29};