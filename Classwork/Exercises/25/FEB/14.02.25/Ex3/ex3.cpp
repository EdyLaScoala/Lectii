#include <iostream>

using namespace std;

void divX(int n, int x)
{
    while(n!=0) cout << n*x << " ", n--;
}

int main()
{
    divX(4, 15);
    return 0;
}