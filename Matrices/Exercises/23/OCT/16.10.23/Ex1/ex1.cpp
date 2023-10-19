#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int max(const int a, const int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n, max_sal=0, fund_part, total_fund = 0;
    fin >> n;
    int v[4][n];
    int a[n] = {0};
    int fund = 0;
    for(int i=0; i<4; i++)
    {
        fund=0; fund_part = 0;
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
            max_sal = max(max_sal, v[i][j]);
            if((2023-v[1][j])>5)
            {
                a[j]=v[0][j];
            }
            fund_part =  v[2][j]*v[3][j]/100;
            fund = fund_part + v[2][j];
            total_fund += fund;
            
        }
    }

    

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << max_sal << endl << endl;

    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            cout << a[i] << "; ";
        }
    }
    cout << endl << endl;

    cout << fund << endl;
}