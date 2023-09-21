#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int n;
    fin >> n;
    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    int prod=0;
    
    for(int i=0; i<n; i++)
    {
        prod *= v[n-i][n-i];
    }
    cout << prod;
}