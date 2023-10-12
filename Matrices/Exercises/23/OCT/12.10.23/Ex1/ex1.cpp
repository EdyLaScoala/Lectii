#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, k, x, v[100][100];
    fin >> m >> n >> k >> x;
    k--;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int i=m; i>k; i--)
    {
        for(int j=0; j<n; j++)
        {
            v[i][j] =  v[i-1][j];
        }
        cout << endl;
    }

    for(int j=0; j<n; j++)
    {
        v[k][j] = x;
    }

    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}