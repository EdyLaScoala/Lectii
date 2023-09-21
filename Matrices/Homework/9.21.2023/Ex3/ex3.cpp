#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("../data.txt");

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
    
    int sum = (n % 2 == 0) ? v[n/2-1][(n/2)-1]+v[n/2-1][n/2] : v[n/2-1][n/2];
    cout << sum;
}