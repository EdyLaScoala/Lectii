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

void div(int a, int b, int &mij)
{
    mij = (a+b)/2;
}

void dei(int s, int f, int n)
{
    int mij;
    if(s == f) 
    {
        inv(v[s][s], v[s][n-s+1]);
        return;
    }
    
    div(s, f, mij);
    dei(s, mij, n);
    dei(mij+1, f, n);
}

int main()
{
    int n;
    ifstream fin("matrice.in");
    fin >> n;
    cout << n << endl;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) fin >> v[i][j];
    dei(1, n, n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}

/*

matrice patratica, n intre 1 si 10
sa se interschimbe coloana p cu coloana q

*/