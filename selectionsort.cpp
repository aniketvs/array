#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int temp;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int  i = 0; i < n-1; i++)
    {
       for (int  j = i+1; j < n; j++)
       {
         if (a[j]<a[i])
         {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
             
         }
         
       }
       
    }
    cout<<"sorted"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
