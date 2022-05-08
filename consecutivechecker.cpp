#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
      for (int i = 0; i < n; i++)
      {
         cin>>a[i];

      }
      int check[n-1];
      int t=1,s[n-2];
      for (int i = 0; i <n-1;i++)
      {
          check[i]=a[i]-a[i+1];
         
         
      }
      for (int i = 0; i < n-1; i++)
      {
         // cout<<check[i];
         if (i<n-2)
         {
            if (check[i]==check[i+1])
         {
            
            t+=1;
            s[i]=t;
         }
        else
         {
              t=1;
             
               
           }
         
         }
         
         
         
         
          
      }
      int maxe=INT_MIN;
   

    for (int  i = 0; i < n-3; i++)
    {
       maxe=max(maxe,s[i]);
      
       
    }
   cout<<maxe<<endl;

    
    
  
   

}