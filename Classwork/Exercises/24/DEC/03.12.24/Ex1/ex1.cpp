#include <iostream>
#include <fstream>

using namespace std;

int v[100][100];

int main()
{
    ifstream fin("date.in");
    int a, b, n, str, n2;
    fin >> n >> str;
    while(fin >> a)
    {
        fin >> b;
        cout << a << " " << b << endl;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}