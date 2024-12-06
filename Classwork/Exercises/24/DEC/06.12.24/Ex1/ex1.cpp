#include <iostream>
#include <fstream>

using namespace std;

int v[100][100];

int main()
{
    ifstream fin("date.in");
    int a, b, n=0;
    while(fin >> a)
    {
        fin >> b;
        v[a][b] = 1;
        v[b][a] = 1;
        n++;
    }
    int node, grad=0;
    cin >> node;
    for(int i=1; i<=n; i++) 
    {
        grad += v[node][i]; 
        if(v[node][i]) cout << i << " ";
    }
    cout << endl << grad << endl;

    return 0;
}