#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, aux;
    fin >> m >> n;
    int v[m][n];
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            v[i][j] = min(i, j);
        }
    }

    

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}