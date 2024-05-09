#include <iostream>

using namespace std;

int factorial(int i)
{
    int s=1;
    if(i!=0)
    {
        s = i*factorial(i-1);
    }
    return s;
}

int main()
{
    int n=0;
    cin >> n;

    cout << factorial(n);
    return 0;
}