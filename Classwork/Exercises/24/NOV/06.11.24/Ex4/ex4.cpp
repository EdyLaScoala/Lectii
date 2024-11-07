#include <iostream>

using namespace std;

int n;

void dei(int n, int &z)
{
    int x1, x2;
    if(n==1 || n==2) z=1;
    else
    {
        dei(n-1, x1);
        dei(n-2, x2);
        z = x1 + x2;
    }
}

int main()
{
    int z;
    n = 10;
    dei(n, z);
    cout << z;
    return 0;
}