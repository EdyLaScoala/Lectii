#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int n, aux;
    fin >> n;
    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    

    for(int i=0; i<n-1; i++)
    {
        int sum = 0;
            for(int j=i+1; j<n; j++)
            {
            sum += v[j-i-1][j];
            }
        cout << sum << " ";
    }
    return 0;
}