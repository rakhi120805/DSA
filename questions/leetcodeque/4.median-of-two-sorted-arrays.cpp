#include<bits/stdc++.h>
using namespace std;


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=-1;
        int n=nums1.size();
        int m=nums2.size();
        int low=0;
        int t=n+m;
        int high=(t/2)-1;
       
        while(low<=high){
            int mid=low+(high - low)/2;
            int l1=mid - 1;
            int el=(t/2)-(mid);
            int l2=el-1;
            int r1=mid;
            int r2=el;
            if(nums1[l1]<=nums2[r2] && nums2[l2]<=nums1[r1]){
                int n1=max(nums1[l1],nums2[l2]);
                int n2=min(nums1[r1],nums2[r2]);
                return ans=(n1+n2)/2;
                
            }
            else if(nums1[l1]>nums2[r2])high=mid-1;
            else low=mid+1;
        }
        return ans;
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
    
    cout<<ans;
}
