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
        for(int j=n-1; j>=i; j--)
        {
            //cout << "v[" << i << "][" << j << "] == " << v[i][j] << " :: " << v[n-j-1][n-i-1] << " == v[" << n-j-1 << "][" << n-i-1 << "];" << endl;   /*  pentru verificare fiecare element in parte, se poate decomenta pentru debugging */
            if(v[i][j] != v[n-j-1][n-i-1])
            {
                cout << "nesîmetric";
                return -1;
            }
        }
    }    
    cout << "sîmetric";
    return 1;
}

/*
input: 

5
1 4 3 2 1
5 2 4 1 2
5 6 1 4 3
8 1 6 2 4
1 8 5 5 1

*/