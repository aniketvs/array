#include<iostream>
using namespace std;
int remaincount(int f,int w){
    if (f<w)
    {
        return 0;
    }
    int k=f/w;
    return k+remaincount(k+f%w,w);
    
}
int firstchoclate(int c,int p, int w){
    int first=c/p;
    return first+remaincount(first,w);
}
int main(int argc, char const *argv[])
{
    int c,p,w;
    cin>>c;
    cin>>p>>w;
      cout<<firstchoclate(c,p,w);
    
    return 0;
}
