#include <iostream>

using namespace std;

float cmmdc(int a, int b)
{
    float r;
    while(a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return r;
}

int main()
{
    struct
    {
        float x, y;
    }a, b;

    cin >> a.x >> a.y >> b.x >> b.y;
    
    if(a.x/a.y>b.x/b.y)
    {
        //cout << "a: " << float(a.x/a.y);
        while(cmmdc(a.x, a.y) == int(cmmdc(a.x, a.y)))
        {
            a.x/=cmmdc(a.x, a.y);
            a.y/=cmmdc(a.x, a.y);
        }
    }
    else
    {
        while(cmmdc(b.x, b.y) == int(cmmdc(b.x, b.y)))
        {
            b.x/=cmmdc(b.x, b.y);
            b.y/=cmmdc(b.x, b.y);
        }
    }

}