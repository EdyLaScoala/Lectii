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
        for(int j=0; j<n; j++)
        {
            if(v[i][j]!=v[j][i])
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
1 4 3 1 2
4 1 2 3 4
3 2 1 5 2
1 3 5 1 4
2 4 2 4 1

ca sa dea simetric, sa nu mai stau sa fac alta ca mi-e lene*/