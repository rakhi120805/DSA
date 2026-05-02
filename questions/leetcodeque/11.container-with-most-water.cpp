#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n=height.size();
    int left=0;
    int right=n-1;
    int l=0;
    int b=0;
    int maxi=INT_MIN;
    while(left<right){
        l=min(height[left],height[right]);
        b=right-left;
        maxi=max(maxi,(l*b));
        if(height[left]<=height[right]){
            left++;
        }
        else{
            right--;
        }

    }        
    return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = maxArea(arr);
    
    cout<<ans;
}

