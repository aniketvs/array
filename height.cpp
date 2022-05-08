#include<bits/stdc++.h>
using namespace std;
int maxheight(int a[],int n,int k){
    vector <pair<int,int>> v;
    vector <int> t(n);
    for (int i = 0; i < n; i++)
    {
      if(a[i]-k>=0){
          v.push_back({a[i]-k,i});
      }
      v.push_back({a[i]+k,i});

    }
    sort(v.begin(),v.end());
    int ele=0,l=0,r=0;
    while (r<v.size() && ele<n)
    {
        if (t[v[r].second]==0)        {
            ele++;
        }t[v[r].second]++;
        r++;
          
    }
    int ans;
    ans=v[r-1].first-v[l].first;
    while (r<v.size())
    {
       if (t[v[l].second]==1)
       {
           ele--;
       }
       t[v[l].second]--;
    
       l++;
       while (r<v.size() && ele<n)
    {
        if (t[v[r].second]==0){
            ele++;
        }t[v[r].second]++;
        r++;   
    }
 if (ele==n)
 {
     ans=v[r-1].first-v[l].first;
 }
 else
 {
     break;
 }
 
 

    }
    return ans;
    
    }
int main(){
    int n,k;
    cout<<"enter a number";
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
   cout<< maxheight(a,n,k);
    
}