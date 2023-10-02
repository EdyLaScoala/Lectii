#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    int m, n;
    fin >> m >> n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i == 1 || j == 1 || i == m || j == n)
            {
                cout << 1 << " ";
            }
            else
            {
                if(j>=i)
                {
                    cout << i << " ";
                }
                else if(m-i<n-j)
                {
                    cout << m-i << " ";
                }
                else
                {
                    cout << j << " ";
                }
            }
        }
        cout << endl;
    }
}