#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m = 49, n = 49, x, sum = 0;
    fin >> m >> n;
    int v[5000];
    while(fin >> x)
    {
        if(x % 2 == 0)
        {
            v[x/2]++;
            if(v[x/2] == 1)
            {
                sum += x;
            }
        }
    }
    cout << sum;
}