#include <iostream>
#include <fstream>

using namespace std;

int a[50][50], s[100], viz[100], oo=4000, n;

ifstream fin("prim.txt");

void read()
{
    int i, j;
    fin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            fin >> a[i][j];
}

void Prim(int x)
{
    int i, j, p, min, k, c = 0;
    viz[x] = 1;
    for(i = 1; i <= n; i++)
        s[i] = x;
    s[x] = 0;
    for(k = 1; k <= n - 1; k++)
    {
        min = oo;
        p = 0;
        for(i = 1; i <= n; i++)
        {
            if(!viz[i] && min > a[i][s[i]])
            {
                min = a[i][s[i]];
                p = i;
            }
        }
        viz[p] = 1;
        for(i = 1; i <= n; i++)
            if(!viz[i] && a[i][s[i]] > a[i][p])
                s[i] = p;
        c = c + min;    
    }
    cout << "Costul minim al arborelui de acoperire: " << c << endl;
}

void print()
{
    int i;
    for(i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    read();
    Prim(1);
    print();
    return 0;
}