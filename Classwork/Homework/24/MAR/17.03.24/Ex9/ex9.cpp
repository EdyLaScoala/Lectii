#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int v[n][n];
    int a[n] = {0};
    int p=0;

    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++) 
        {
            cin >> v[i][j]; 
            if(j>=i && j<n-1)
            {
                a[p]=v[i][j]; p++;
            }
        }
    }

    cout << endl;

    for(int i=0; i<p; i++)
    {
        for(int j=i+1; j<p; j++)
        {
            if(a[i]<a[j]) swap(a[i], a[j]);
        }
        cout << a[i] << " ";
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