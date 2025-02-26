#include <iostream>
#include <fstream>

using namespace std;

int a[10][10], v[20], c[20], prim, ultim, n;

int read()
{
    ifstream fin("date.in");
    fin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            fin >> a[i][j];
}

void init(int k)
{
    prim = ultim = 1;
    c[ultim] = k;
    v[k] = 1;
}

bool este_vid()
{
    return prim > ultim;
}

void adauga(int i)
{
    ultim++;
    c[ultim] = i;
    v[i] = 1;
}

void elimina()
{
    prim++;
}

void bfs()
{
    int k = c[prim];
    for(int i=1; i<=n; i++)
        if(a[k][i] == 1 && v[i] == 0)
            adauga(i);
    elimina();

}

void afisare()
{
    for(int i=1; i<=n; i++)
        cout << c[i] << " ";
}

int main()
{
    read();
    init(1);
    while(!este_vid())
        bfs();
    for(int i=1; i<=n; i++)
        cout << c[i] << " ";
    return 0;
}