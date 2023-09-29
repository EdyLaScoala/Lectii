#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("matrice.in");
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

    for(int k=0; k<n/2; k++)
    {
        for(int j=k; j<n-k-1; j++)
        {
            cout << v[k][j] << " ";
        }
        for(int i=k; i<n-k-1; i++)
        {
            cout << v[i][n-1-k] << " ";
        }
        for(int j=n-1-k; j>k-1; j--)
        {
            cout << v[n-1-k][j] << " ";
        }   
        for(int i=n-1-k; i>k-1; i--)
        {
            cout << v[i][k] << " ";
        }
        cout << endl;
    }
}