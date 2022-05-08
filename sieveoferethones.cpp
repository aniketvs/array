#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int a[n];
    for (int i = 2; i < n; i++)
    {
        a[i]=i;
    }
  
    
    for (int i = 2; i < n; i++)
    {
        
    
    for (int j = i*i; j < n; j++)
    {  if(j%i==0){
        a[j]=0;}
    }
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i]!=0)
        {
            cout<<i<<" - "<<a[i]<<endl;
        }
        
    }
    
    
}