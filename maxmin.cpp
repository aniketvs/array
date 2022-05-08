#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {int k;
       cin>>k;
       a[i]=k;
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;

    for (int  i = 0; i < n; i++)
    {
        maxno=max(maxno,a[i]);
         minno=min(minno,a[i]);
       
    }
    
    cout<<minno<<endl;
    cout<<maxno<<endl;
    return 0;
}
