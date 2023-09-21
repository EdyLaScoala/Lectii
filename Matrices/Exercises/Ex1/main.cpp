#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int v[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }


    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}