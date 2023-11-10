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
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
             if(v[i][i]>v[i][j])
             {
                for(int k=0; j<n; k++)
                {
                    swap(v[i][k], v[j][k]);
                }
             }
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