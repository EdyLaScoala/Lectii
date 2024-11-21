#include <iostream>
#include <fstream>

using namespace std;

int n, minim, maxim;
int v[1000];

void dei(int s, int f, int &minim, int &maxim)
{
    if(s == f) 
    {
        minim = min(minim, v[s]);
        maxim = max(maxim, v[s]);
        return;
    }
    dei(s, (s+f)/2, minim, maxim); dei((s+f)/2+1, f, minim, maxim);
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=1; i<=n; i++) fin >> v[i];
    minim = v[1]; maxim = v[1];
    dei(1, n, minim, maxim);
    cout << minim << " : " << maxim;
    return 0;
}