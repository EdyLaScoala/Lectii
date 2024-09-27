#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, p, cont=0;
    cin >> n >> p;
    int v[n][p];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            v[i][j] = pow(cont, 2);
            cont+=2;
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}