#include <iostream>
#include <fstream>

using namespace std;

int a[10][10], n, v[10], uf, st[20], k;

void citire()
{
    ifstream fin("date.in");
    fin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            fin >> a[i][j];
}

void afisare()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void init(int k)
{
    uf = 1;
    st[uf] = k;
    v[k] = 1;
}

bool este_vida()
{
    return uf == 0;
}

void adauga(int i)
{
    uf++;
    st[uf] = i;
    v[i] = 1;
}

void elimina()
{
    uf--;
}


void DFS()
{
    int i=1;
    k = st[uf];
    while(i<=n && (a[k][i] == 0 || (a[k][i]==0  && v[i]==1)))
        i++;
    if(i>n)
        elimina();
    else
    {
        adauga(i);
        cout<<i<<" ";
    }
}


int main()
{
    cout << "foame." << endl;
    return 0;
}