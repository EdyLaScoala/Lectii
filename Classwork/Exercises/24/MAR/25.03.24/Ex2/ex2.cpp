#include <iostream>
#include <math.h>

using namespace std;

bool prim(int& n)
{
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
    return true;
}

int divs(int n)
{
    int sum=1;
    if(prim(n)) return 1;
    for(int i=1; i<=n; i++)
    {
        if(!prim(i) && n%i==0)
        {
            sum += i;
            cout << i << endl;
        }
    }
    return sum;
}

int main()
{
    int n=0;
    cin >> n;

    cout << divs(n);

    return 0;
}