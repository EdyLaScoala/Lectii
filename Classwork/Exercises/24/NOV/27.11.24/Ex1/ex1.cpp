#include <iostream>

using namespace std;

float dei(int st, int dr)
{
    if(st==dr)
    {
        return 1.0/(1+2*st);
    }
        
    else
    {
        int m = (st+dr)/2;
        return dei(st, m) * dei(m+1, dr);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << dei(0, n-1);
    return 0;
}