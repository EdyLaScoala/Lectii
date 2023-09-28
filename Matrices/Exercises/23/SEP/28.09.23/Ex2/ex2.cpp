#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n;
    fin >> n >> m;
    int v[m][n], x[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            x[i][j] = v[n-1-j][i];
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}