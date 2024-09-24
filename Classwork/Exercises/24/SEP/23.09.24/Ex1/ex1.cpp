#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n=0;
    fin >> n;
    int v[n][n];
    

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int lim=0; lim<n/2; lim++)
    {
        for(int i=lim; i<n-lim-1; i++) cout << v[lim][i] << " ";
        for(int i=lim; i<n-lim-1; i++) cout << v[i][n-lim-1] << " ";
        for(int i=n-lim-1; i>lim; i--) cout << v[n-lim-1][i] << " ";
        for(int i=n-lim-1; i>lim; i--) cout << v[i][lim] << " ";
    }
    if(n%2!=0) cout << v[n/2][n/2] << " ";

    return 0;
}