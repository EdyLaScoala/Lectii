#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("./data.txt");

int main()
{
    int m, n, aux;
    fin >> m >> n;
    m+=2; n+=2;
    int v[m][n];
    for(int i=0; i<m; i++)
    {        
        for(int j=0; j<n; j++)
        {
            if (i == 0 || i == m || j == 0 || j == m)
            {
                v[i][j] = 0;
            }
            else
            fin >> v[i][j];
        }
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