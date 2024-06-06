#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    bool ok=true;

    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i][j]!=0)
            {
                ok=false;
                break;
            }
        }
    }
    cout << ok << endl;

    return 0;
}