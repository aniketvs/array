#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        c=0;
        for (int j = i; j < n; j++)
        {
          c+=a[j];
          cout<<c<<endl;
        }
        
    }
    
    
}