#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int k=n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    while (n>0)
    {
          for (int i = 0; i < n; i++)
    {
        if (a[i]>a[i+1])
        {
            int temp;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        
    }
    n--;
    }
    cout<<"sorted array is:-"<<endl;
  for (int i = 0; i <k; i++)
  {
      cout<<a[i]<<endl;
  }
  
    
    return 0;
}
