#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("matrice.in");

int main()
{
    int n;
    fin >> n;
    short v[n][n], a[30]={0};
    for(int i=0; i<n; i++)
    {
        a[i] = 99;
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
            if(v[i][j] <= v[i][a[i]])
            {
                a[i] = j;
                cout << a[i] << " " << i << endl;
            }
        }
    }

    cout << endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0; i<n; i++)
    {
        if(v[i][n-i-1] = v[i][a[i]])
        {
            cout << v[i][a[i]] << endl;
        }
    }
    return 0;
}