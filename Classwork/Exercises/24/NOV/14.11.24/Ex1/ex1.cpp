#include <iostream>
#include <fstream>

using namespace std;

int v[10][10];

void inv(auto &a, auto &b)
{
    auto t=a;
    a = b;
    b = t;
}

void dei(int s, int f, int &q, int &p)
{
    if(s == f) 
    {
        inv(v[s][p], v[s][q]);
        return;
    }
    dei(s, (s+f)/2, q, p);
    dei((s+f)/2+1, f, q, p);
}

int main()
{
    int n, q, p;
    ifstream fin("date.in");
    fin >> n >> q >> p;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) fin >> v[i][j];
    dei(1, n, q, p);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}

/*

matrice patratica, n intre 1 si 10
sa se interschimbe coloana p cu coloana q

*/