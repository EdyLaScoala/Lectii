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
            if(i%2!=0)
                v[i][j] = j+1;
            else
                v[i][j] = i+1;
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
    return 0;
}