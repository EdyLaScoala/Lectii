#include <iostream>

using namespace std;

long long SumProdRec(int n)
{
    long long s=0;
    if(n!=1)
    {
        s = n*(n-1) + SumProdRec(n-1);
    }
    return s;
}

int main()
{
    int n=0;
    cin >> n;

    cout << SumProdRec(n);

    return 0;
}