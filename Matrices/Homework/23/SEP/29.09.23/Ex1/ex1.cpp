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

    for(int k=0; k<=(n/2)+1; k++)
    {
        //cout << k << " " << ((n/2)+1)-k << endl;
        for(int i=((n/2))-k; i<=k; i++)
        {
            for(int j=((n/2))-k; j<=k; j++)
            {
                cout << v[i+1][j+1] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
    }
}