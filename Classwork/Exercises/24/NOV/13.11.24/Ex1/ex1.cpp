#include <iostream>
#include <fstream>

using namespace std;

int n;
int v[1000];

bool dei(int s, int f)
{
    if(s == f) return (v[s]%2==0);
    else return (dei(s, (s+f)/2) && dei((s+f)/2+1, f));
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=1; i<=n; i++) fin >> v[i];
    cout << dei(1, n);
    return 0;
}