#include <iostream>

using namespace std;

int fibo(int a, int b, int n)
{
    if(!n) return a;
    return fibo(a+b, a, n-1);
}

int main()
{
    int n = 10;
    cout << fibo(1, 0, n-1);
    return 0;
}