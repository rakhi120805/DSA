1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n=matrix.size();//ye matrix ka row nikalne k liye h 
5        int m=matrix[0].size();//ye matrix ka column nikalne k liye 
6        vector<vector<int>>m2(n,vector<int>(m));//ye mera dusra matrix jisko hmlog bharenge 
7        for(int i=0;i<n;i++){//ye wala line mera sirf row traverse krega  row ka value = 0 1 2
8            for(int j=0;j<m;j++){//ye wala line mera column traverse krega column ka value 0 1 2
9                m2[i][j]=matrix[n-(j+1)][i];//ye formula aise h ki matrix1 [0][0] ko hmko matrix2 [2][0] banana h 
10            }
11
12        }
13        for(int i=0;i<n;i++){
14            for(int j=0;j<m;j++){
15                matrix[i][j]=m2[i][j];
16            }
17        }
18    }
19};