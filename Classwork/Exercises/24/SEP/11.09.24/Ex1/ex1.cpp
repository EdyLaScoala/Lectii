#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

bool prim(int& n)
{
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
    return true;
}

int f(int &a)
{
    for(int i=2; i<sqrt(a); i++)
    {
        if(prim(i) && a%i == 0)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n, nr, v[100], index=0;
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++)
    {
        fin >> nr;
        if(!f(nr)) v[index] = nr, index++;
    }
    return 0;
}