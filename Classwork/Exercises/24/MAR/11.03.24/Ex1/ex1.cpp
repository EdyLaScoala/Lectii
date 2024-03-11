#include <iostream>
#include <math.h>

using namespace std;

bool prim(int& n)
{
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
    return true;
}

void sub(int n)
{
    for(int i=0; i<2; n--)
    {
        if(prim(n))
        {
            cout << n << endl;
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sub(n);
}