1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int n=s.size();
5
6        for(int i=0;i<n/2;i++){
7            swap(s[i],s[n-i-1]);
8        }
9    }
10};