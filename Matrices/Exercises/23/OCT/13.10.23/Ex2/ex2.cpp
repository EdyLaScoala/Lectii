#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, aux;
    fin >> m >> n;
    int v[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    
}