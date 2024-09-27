#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int v[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==n-i-1) v[i][j] = 0;
            else if(j<n-i-1) v[i][j] = j+1;
            else v[i][j] = n-i;
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}