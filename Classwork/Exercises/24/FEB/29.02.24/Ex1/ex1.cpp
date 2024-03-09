#include <iostream>
#include <math.h>

using namespace std;

bool prim(int n)
{
    for(int i=2; i<sqrt(n); i++) if(n%i==0) return false;
    return true;
}

int factori(int a, int b)
{
    unsigned short total = 0;
    int count = 0;
    for(int i=2; i<a && i<b; i++)
    {
        count = 0;
        while(a%i==0 && b%i==0)
        {
            a/=i;
            b/=i;
            count++;
        }

        if(!prim(a) || !prim(b))
        {
            if(a%i!=0 && b%i!=0) total++;
            else if(a%i==0) while(a%i==0) a/=i;
            else if(b%i==0) while(b%i==0) b/=i;
        }
    }

    return total;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << factori(a, b);

    return 0;
}