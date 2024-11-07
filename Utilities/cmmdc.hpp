#include <iostream>

int cmmdc(int &a, int &b)
{
    int r, cmmdc;
    while(a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cmmdc = r;
    return cmmdc;
}