#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1=0,n2=0,n3=0;
    
    for (int i = 1; i < n; i++)
    { if (i%5==0)
    {
        n1++;
    }
    else if (i%7==0)
    {
        n2++;
    }
    if (i%5==0 && i%7==0)
    {
        n3++;
    }
    
    
        
    }
    cout<<n1+n2-n3;
}