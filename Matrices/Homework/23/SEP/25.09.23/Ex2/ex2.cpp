#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, x, maxim=0;
    fin >> m >> n; 
    int v[1000001] = {0};
    while(fin >> x)
    {
        v[x]++;
        //cout << x << " " << v[x] << endl;
    }

    for(int i=0; i<m-1; i++)
    {
        if(v[i]>maxim)
        {
            maxim=v[i];
            cout << i << " " << v[i] << maxim << endl;
        }
    }
    cout << maxim;
}