#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int v[n][n];

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> v[i][j];

    for(int i=0; i<n-1; i++) for(int j=i+1; j<n; j++) if(v[i][i] > v[j][j]) swap(v[i][i], v[j][j]);

    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++) cout << v[i][j] << " ";
        cout << endl;
    }

    return 0;
}

/*
input:

5
56  14  23  42  73
32  67  81  95  11
27  18  36  49  62
88  25  37  53  70
19  44  62  58  85

*/