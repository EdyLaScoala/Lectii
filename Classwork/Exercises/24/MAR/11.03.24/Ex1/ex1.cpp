#include <iostream>
#include <math.h>

using namespace std;

void sub(int n, int &a, int &b)
{
    bool prim=true;
    for(int i=0; i<2; n--)
    {
        prim=true;
        for(int j=2; j<=sqrt(n); j++) if(n%j==0) prim=false;
        if(prim)
        {
            if(i==0) a=n; else b=n;
            i++;
        }
    }
}

int main()
{
    int n, a, b;
    cin >> n;
    sub(n, a, b);
    cout << a  << " " << b;
}