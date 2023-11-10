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

    int i=0, j=0, sum=0;

    while(i<m && j<n)
    {
        if(v[i+1][j] > v[i+1][j+1])
        {
            sum += v[i++][j];
        }
        else
        {
            sum += v[i++][j++];
        }
    }
    cout << sum;
}