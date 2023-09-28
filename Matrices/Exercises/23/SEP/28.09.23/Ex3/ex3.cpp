#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n;
    fin >> m >> n;
    int v[100][100];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {        
        cout << v[0][i] << " ";
    }
    for(int i=0; i<n; i++)
    {
        cout << v[i][n-1] << " ";
    }
    for(int i=m-1; i>0; i--)
    {
        cout << v[n-1][i] << " ";
    }
    for(int i=n-1; i>=0; i--)
    {
        cout << v[i][0] << " ";
    }
}