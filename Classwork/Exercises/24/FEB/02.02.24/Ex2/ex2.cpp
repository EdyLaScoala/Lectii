#include <iostream>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

bool palindrom(int n)
{
    int n2=0, n3=n;
    while(n!=0)
    {
        n2*=10;
        n2+=n%10;
        n/=10;
    }
    if(n2==n3) return true; else return false;
}

int main()
{
    int n;
    cin >> n;
    if(palindrom(n))
    {
        cout << n;
    }
    else
    {
        cout << "Numarul nu este palindrom.";
    }
}