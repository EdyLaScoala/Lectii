#include <iostream>

using namespace std;

void ex(int x)
{
    cout << x%10;
    if(x!=0) ex(x/10);
}

int main()
{
    int n=0;
    cin >> n;

    ex(n);
    return 0;
}