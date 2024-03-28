#include <iostream>

using namespace std;

void divX(int n,  int x)
{
    while(n!=0)
    {
        cout << x*n << " ";
        n--;
    }
}

int main()
{
    int n=0, x=0;
    cin >> n >> x;

    divX(n, x);

    return 0;
}