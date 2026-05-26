#include<bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &a, vector<int> &b, int k){
    int n=a.size();
    int m=b.size();
    if(n>m)return kthElement(b,a,k);
    int low=0;
    int high=n;
    while(low<=high){
        int cut1=low + (high-low)/2;
        int cut2=k-cut1;
        int l1= (cut1==0?INT_MIN:a[cut1 - 1]);
        int l2=(cut2==0?INT_MIN:b[cut2 - 1]);
        int r1=(cut1==n?INT_MAX:a[cut1]);
        int r2=(cut2==m?INT_MAX:b[cut2]);
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2){
            high=cut1-1;
        }
        else{
            low=cut1+1;
        }
    }
    return 0;

}

int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int k;
    cin>>k;
    
    int ans = kthElement(arr1,arr2,k);
    
    cout<<ans;
}