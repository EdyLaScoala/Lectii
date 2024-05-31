#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int v[20][20];
    int m, n;
    cin >> m >> n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            v[i][j] = min(i+1, j+1)*10 + max(i+1, j+1);
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}