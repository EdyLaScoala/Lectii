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

    for (int i = 0; i < m; i++)
    {
        aux = v[i][0];
        for(int j=0; j<n-1; j++)
        {
            v[i][j] = v[i][j+1];
        }
        v[i][n-1] = aux;
    }
    

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}