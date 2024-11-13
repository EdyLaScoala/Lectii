#include <iostream>
#include <fstream>

using namespace std;

int n;
int v[1000];

int dei(int s, int f)
{
    if(s == f) return v[s];
    else return dei(s, (s+f)/2) * dei((s+f)/2+1, f);
}

// 1*2*...*n

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=1; i<=n; i++) v[i] = i;
    cout << dei(1, n);
    return 0;
}


/*

t: int v[x]

daca sir sortat crescator
daca elementele sirului sunt impare

*/