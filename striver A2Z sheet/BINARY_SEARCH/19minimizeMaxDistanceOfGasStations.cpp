#include<bits/stdc++.h>
using namespace std;

double distance(vector<int>&arr,int k){
    int n=arr.size();
    if(n==1)return 0.00;
    vector<double>howmany(n-1,0);
    while(k>0){
        double maxi=-1;
        int index=-1;
        for(int i=0;i<n-1;i++){
            double dist=(double)(arr[i+1]-arr[i]);
            double sectionL=((dist) /(howmany[i] + 1));
            if(sectionL>maxi){
                maxi=sectionL;
                index=i;
            }
        }
        howmany[index]++;
        k--;
    }
    double ans=-1;
    for(int i=0;i<howmany.size();i++){
        double diff=(double)(arr[i +1] - arr[i]);
        double sl=((diff) / (howmany[i]+ 1));
        ans=max(ans,sl);
    }
    return (double)ans;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    double ans = distance(arr,k);
    
    cout<<ans;
}