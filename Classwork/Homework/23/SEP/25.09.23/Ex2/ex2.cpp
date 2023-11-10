#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m, n, x=0, maxAppearances = 0, numberWithMax = -1;
    fin >> m >> n; 
    int v[1000001] = {0};
    while(fin >> x)
    {
        v[x]++;
        if(v[x] > maxAppearances)
        {
            maxAppearances = v[x];
            numberWithMax = x;
        }
    }
    cout << numberWithMax;
}
