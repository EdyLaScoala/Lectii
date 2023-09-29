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

    for(int k=0; k<=n/2; k++)
    {
        for(int i=k; i<n-k; i++)
        {
            for(int j=k; j<n-k; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
    }
}