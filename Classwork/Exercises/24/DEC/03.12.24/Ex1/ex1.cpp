#include <iostream>
#include <fstream>

using namespace std;

int v[100][100];

int main()
{
    ifstream fin("date.in");
    int a, b, n=0;
    while(fin >> a >> b)
    {
        v[a][b] = 1;
        v[b][a] = 1;
        n = max(n, a);
        n = max(n, b);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}