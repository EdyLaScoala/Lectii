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
        for(int j=n-1; j>i; j--)
        {
            if(v[i][j]!=0)
            {
                cout << "netreungheular";
                return -1;
            }
        }
    }    
    cout << "treungheulara";
    return 1;
}