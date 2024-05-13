#include <iostream>

using namespace std;

void ex(int n, int m, int& z)
{
    int c;
    if(n+m>0)
    {
        n=n%10;
        if(m%10>c) c=m%10;
        z = z*10+c;
        ex(n/10, m/10, z);
    }
}

int main()
{
    int n=0;

    ex(10542, 1821, n);

    cout << n;

    return 0;
}