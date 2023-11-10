#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("./data.txt");

int main()
{
    int m, n, x;
    fin >> m >> n;
    int v[m][n];
    for(int i=0; i<m; i++)
    {        
        for(int j=0; j<n; j++)
        {
                fin >> v[i][j];
        }
    }
    fin >> x;
    cout << x << endl;
    for(int i=0; i<m; i++)
    {        
        for(int j=0; j<n; j++)
        {
            if (((i == 0 || i == m-1) || (j == 0 || j == m)) && v[i][j] == x)
            {
                cout << "DA";
                return 0;
            }
        }
    }
    cout << "NU";
}