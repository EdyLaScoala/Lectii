#include <iostream>
#include <fstream>

using namespace std;

int v[50][50];

void div(int s, int f, int &m)
{
    m = (s+f)/2;
}

void comp(int x, int y, int &res)
{
    res = x+y;
}

void dei(int s1, int s2, int f1, int f2, int &res)
{
    cout << s1 << " " << f1 << " " << s2 << " " << f2 << endl;
    int x1, x2, x3, x4, m1, m2;
    if(s1 == f1 && s2 == f2)
    {
        res = v[s1][s2];
    }
    else
    {
        div(s1, f1, m1);
        div(s2, f2, m2);

        dei(s1, m1, s2, m2, x1);
        dei(m1, f1, s2, m2, x2);
        dei(s1, m1, m2, f2, x3);
        dei(m1, f1, m2, f1, x4);

        comp(x1, x2, x1);
        comp(x3, x4, x2);
        comp(x1, x2, res);
    }
}

int main()
{
    ifstream fin("date.in");
    int m, n, res;
    fin >> m >> n;
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) fin >> v[i][j];
    dei(0, m, 0, n, res);
    cout << res;
    return 0;
}