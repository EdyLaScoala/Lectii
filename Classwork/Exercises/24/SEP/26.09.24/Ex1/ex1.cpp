#include <iostream>
#include <fstream>

using namespace std;

int m=0, n=0;
int v[100][100];

void f()
{
    for(int lim=0; lim<n/2; lim++)
    {
        for(int i=lim; i<n-lim-1; i++) cout << v[lim][i] << " ";
        for(int i=lim; i<m-lim-1; i++) cout << v[i][n-lim-1] << " ";
        for(int i=n-lim-1; i>lim; i--) cout << v[m-lim-1][i] << " ";
        for(int i=m-lim-1; i>lim; i--) cout << v[i][lim] << " ";
    }
}

int main()
{
    ifstream fin("bac.in");  
    fin >> m >> n; 
    for(int i=0; i<m; i++) for(int j=0; j<n; j++)  fin >> v[i][j];
    f();
    return 0;
}