#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int prim(int& n)
{
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout << "Numarul nu este prim.";
            return 0;
        }
    }
    cout << "Numarul este prim.";
    return 1;
}

int main()
{
    int n=0;
    cin >> n;
    
    if(prim(n)==1)
    {
        cout << "Numarul este prim.";
    }
    else
    {
        cout << "Numarul nu este prim.";
    }

    return 0;
}