#include<iostream>
using namespace std;

int main(){
    int n1=42,n2=24;
    cout<<"enter a number";
 
    
     while(n2!=0)
     {int r=n1-n2;
     n1=n2;
     n2=r;
     }
    
    cout<<n2;
}