#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, num=0, k;
    fin >> n >> m >> k;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        fin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        fin >> b[i];
    }

    int i=0, j=0;

    while(k!=0)
    {
        while(a[i]>=b[j] || a[i+1] >= b[j])
        {
            cout << a[i] << " " << b[j] << endl;
            j++;
            k--;
        }
        while(a[i]<=b[j] || a[i+1] <= b[j])
        {
            cout << a[i] << " " << b[j] << endl;
            i++;
            k--;
        }
    }
}