#include <iostream>
#include <fstream>

using namespace std;

int v[1001], n;

void combina(int a, int b, int &res)
{
    res = a+b;
}

void div(int s, int f, int &mij)
{
    mij = (s+f)/2;
}

void dei(int s, int f, int &res)
{
    int mij, x1=0, x2=0;
    if(s==f)
    {
        // ce vrei sa faci aici
        //return;
    }
    else
    {
        div(s, f, mij);

        dei(s, mij, x1);
        dei(mij+1, f, x2);

        combina(x1, x2, res);
    }
}

int main()
{
    int res = 0;
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++) fin >> v[i];
    dei(0, n-1, res);
    cout << res << endl;
    return 0;
}

