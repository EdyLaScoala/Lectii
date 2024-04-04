#include <iostream>

using namespace std;

int cmmmc(int a, int b)
{
    int a2, b2, r;
    a2=a, b2=b;
    while(a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return (a2*b2)/r;
}

int main()
{
    struct fractie
    {
        unsigned long long x, y;
    }f, f1, f2;

    cin >> f1.x >> f1.y >> f2.x >> f2.y;

    f.y = cmmmc(f1.y, f2.y);
    f.x = f1.x*cmmmc(f1.y, f2.y)/f1.y + f2.x*cmmmc(f1.y, f2.y)/f2.y;

    cout << f.x << "/" << f.y;
    
}