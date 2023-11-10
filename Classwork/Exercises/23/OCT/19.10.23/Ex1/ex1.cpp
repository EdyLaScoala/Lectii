#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("matrice.in");

int main()
{
    int n, min, prod=1;
    fin >> n;
    short v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int j=0; j<n; j++)
    {
        min = 99;
        for(int i=0; i<n; i++)
        {
            if(v[i][j] < min)
            {
                min = v[i][j];
            }
        }
        if(min = v[j][n-j-1] && )
        {
            cout << min << endl;
            prod*=min;
        }
    }
    cout << endl;

    cout << prod;
    return 0;
}