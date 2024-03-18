#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int v[n][n];

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> v[i][j];

    for(int i=0; i<n; i++)
    {
        swap(v[i][i], v[i][n-i-1]);
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