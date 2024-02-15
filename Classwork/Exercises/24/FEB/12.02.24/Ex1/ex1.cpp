#include <iostream>
#include <cstring>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int putere(int a, int b)
{
    int p=1;
    while(b!=0)
    {
        p*=a;
        b--;
    }
    return p;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    cout << putere(a, b);
}


// swap, minimax, cmmdc dintre 2 numere, prim, puterea, etc.