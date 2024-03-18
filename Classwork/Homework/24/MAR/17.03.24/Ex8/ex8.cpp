#include <iostream>

using namespace std;

int cmmdc(int &a, int &b)
{
    cout << a << "; " << b << endl;
    int r, cmmdc=0;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return r;
}

int main()
{
    int n=0;
    cin >> n;

    int v[n][n];

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> v[i][j];

    int min = v[0][0], max = v[0][n-1];
    for(int i=0; i<n; i++)
    {
        if(v[i][i]<min) min=v[i][i];
        if(v[i][n-i-1]>max) max = v[i][n-i-1];
    }
    cout << cmmdc(min, max);
}

/*
input:
5
56  14  23  42  73
32  67  81  95  11
27  18  36  49  62
88  25  37  53  70
19  44  62  58  85

*/