#include<bits/stdc++.h>
using namespace std;
// int kadane(int a[],int n){
//     int curr=0;int m=INT_MIN;
//     for (int i = 0; i <n; i++)
//     {
//         curr+=a[i];
//         if (curr<0)
//         {
//          curr=0;
//         }
//         m=max(curr,m);
        
//     }
//     return m;
// }
int main(){
    int n,k;
    cin>>k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];}
        int j[n];
                 for(int i=0;i<n;i++){
             if(a[i]>k){
                 j[i]=a[i]-k;
             }else if(a[i]<=k){
                 j[i]=a[i]+k;
             }
         }
       int m=INT_MAX;
       int mm=INT_MIN;
       for (int  i = 0; i < n; i++)
       {cout<<i<<"-"<<j[i]<<endl;
          m=min(m,j[i]);
          mm=max(mm,j[i]);
       }
       
         
         
        
        int ans=mm-m;
        cout<<ans<<"-"<<mm<<"-"<<m;
    }

    // int nowrap=kadane(a,n);
    // int t=0;
    // for (int i = 0; i < n; i++)
    // {t+=a[i];
    // a[i]=-a[i];
    //     /* code */
    // }
    // int wrap=t+kadane(a,n);
    // cout<<max(wrap,nowrap);
    
    
