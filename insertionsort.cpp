#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < a[i-1])
        {
            while (i > 0)
            {
                if (a[i] < a[i-1])
                {
                    int temp;
                    temp = a[i-1];
                    a[i-1] = a[i];
                    a[i] = temp;
                }
                i--;
            }
        }                
                
    }
    cout<<"sorted string is:-"<<endl;
for (int i = 0; i < n; i++)
{
   cout<<a[i]<<endl;
}

    return 0;
}
