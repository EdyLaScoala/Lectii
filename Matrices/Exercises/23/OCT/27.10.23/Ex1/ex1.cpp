#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, sum=0, prod=0, total=0;
    fin >> m >> n;
    int a[m], b[n];
    for(int i=0; i<m; i++)
    {
        fin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        fin >> b[i];
    }

    

    for(int i=0; i<m; i++)
    {
        sum = a[i]%10 + a[i]/10%10;
        prod = a[i]%10 * a[i]/10%10;
        for(int j=0; j<n; j++)
        {
            if((b[j]%10 + b[j]/10%10 == sum) && (b[j]%10 * b[j]/10%10 == prod))
            {
                total++;
                cout << a[i] << " " << b[j] << endl;
            }
        }
    }
    cout << total;
    return 0;
}