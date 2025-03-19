#include <iostream>
#include <fstream>

using namespace std;

int a[100][100], n;
int const MAX = 5000;

ifstream fin("royfloyd.in");

void init()
{
    int i, j;
    fin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j)
                a[i][j] = 0;
            else
                a[i][j] = MAX;
}

void citire()
{
    int i, j, c;
    while(fin >> i >> j >> c)
        a[i][j] = c;
}

void transformare()
{
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                if(a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];
}

void afisare()
{
    cout << "Costurile minime sunt: " << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            if(a[i][j] == MAX && i!=j)
                cout << "(" << i << ", " << j << ")-" << a[i][j] << endl;
    }
}

int main()
{
    init();
    citire();
    transformare();
    afisare();
    return 0;
}