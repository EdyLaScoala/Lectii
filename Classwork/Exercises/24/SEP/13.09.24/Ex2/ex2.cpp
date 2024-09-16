#include <iostream>
#include <math.h>

using namespace std;

bool prim(int& n)
{
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
    return true;
}

int f(int n)
{
    for(int i=2; i<=n; i++) if(prim(i) && n%i==0) return i;
}

int main()
{
    int n=0;
    cin >> n;

    cout << f(n);

    return 0;
}