#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int m=1000, n=1000;
    fin >> m >> n;
    int v[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[m-i-1][j] << " ";
        }
        cout << endl;
    }
    return 0;
}