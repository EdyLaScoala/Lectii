#include <iostream>

using namespace std;

int divs(int n)
{
    int k=0;
    for(int i=2; i<=n; i++) if(n%i==0) k++;
    return k;
}

int main()
{
    int n=0;
    cin >> n;

    cout << divs(n);

    return 0;
}