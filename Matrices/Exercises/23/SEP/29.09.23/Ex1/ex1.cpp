#include <iostream>
#include <fstream>

using namespace std;

void matricePara()
{
    ifstream fin("matrice.in");
    cout << "Par" << endl;
    int n=100;
    fin >> n;
    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void matriceImpara()
{
    ifstream fin("matrice.in");
    cout << "Impar" << endl;
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
        for(int i=((n/2))-k; i<=k; i++)
        {
            for(int j=((n/2))-k; j<=k; j++)
            {
                if((i == -1 || i == k) || (j == -1 || j == k))
                {
                    cout << v[i+1][j+1] << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        cout << endl << endl;
    }
}

int main()
{
    ifstream fin("matrice.in");
    int n;
    fin >> n;
    fin.close();
    if(n%2==0)
    {
        matricePara();
    }
    else
    {
        matriceImpara();
    }
}