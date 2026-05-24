#include<bits/stdc++.h>
using namespace std;


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=-1;
        int n=nums1.size();
        int m=nums2.size();
        if(n>m)return findMedianSortedArrays(nums2,nums1);
        int low=0;
        int t=n+m;
        // int fixed=t/2;
        int high=n;
       
        while(low<=high){
            int mid=low+(high - low)/2;
            int el=((n + m + 1)/2) - mid;
            int l1=((mid)==0?INT_MIN:nums1[mid-1]);
            
            int l2=((el)==0?INT_MIN:nums2[el-1]);
            int r1=((mid)==n?INT_MAX:nums1[mid]);
            int r2=((el)==m?INT_MAX:nums2[el]);
            if(l1<=r2 && l2<=r1){
                if(t%2==0){
                int n1=max(l1,l2);
                int n2=min(r1,r2);
                return (n1+n2)/2.0;
                }
                else{
                    return max(l1,l2);
                }
                
            }
            else if(l1>r2)high=mid-1;
            else low=mid+1;
        }
        return 0.0;
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
    
    double ans = findMedianSortedArrays(arr1,arr2);
    
    cout  << ans;
}
