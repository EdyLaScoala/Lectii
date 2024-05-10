#include <iostream>

using namespace std;

int sumcif(int n)
{
    int s=0;
    if(n!=0)
    {
        s = n%10 + sumcif(n/10);
    }
    return s;
}

int main()
{
    int n=0;
    cin >> n;

    cout << sumcif(n);

    return 0;
}