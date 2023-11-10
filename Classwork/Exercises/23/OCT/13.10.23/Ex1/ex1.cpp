#include <iostream>
#include <fstream>

using namespace std;



ifstream fin("data.txt");
int m, n;
fin >> m >> n;
m+=2;
n+=2;
int v[m][n], a[m][n];

int main()
{
    

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            fin >> v[i][j];
        }
    }



    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(v[i][j]%2==0)
            {
                a[i][j] = v[i-1][j-1] + v[i-1][j] + v[i-1][j+1] + v[i][j-1] + v[i][j+1] + v[i+1][j-1] + v[i+1][j] + v[i+1][j+1];
            }
            else
            {
                a[i][j] = v[i][j]; 
            }
            cout << a[i][j] << " ";;
        }
        cout << endl;
    }
    return 0;
}