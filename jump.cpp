#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i=a[0];
    int c=1;
    int temp=0;
    if(a[0]==1){
        return -1;}else{

        
    while (i<n)
    {int mx=INT_MIN;
        if(mx==0){
        return -1;
    }else{
        
        
        for(int j=temp+1;j<=i;j++){
            mx=max(mx,a[j]);
            if (mx==a[j])
            {
                i=j;
            }
            
            
        }
        temp=i;
        i=mx+i;
        cout<<mx<<endl;
      
        c++;}
    }}
cout<<c;
    
    
}