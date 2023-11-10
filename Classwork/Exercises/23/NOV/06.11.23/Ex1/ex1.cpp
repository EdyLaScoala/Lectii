#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, aux;
    m=4; n=24;
    int v[4][24];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    

    for(int i=0; i<n; i++)
    {
        if(v[0][n] == 2024 && v[23][n] == 2024)
            cout << n << " ";
    }
    return 0;
}