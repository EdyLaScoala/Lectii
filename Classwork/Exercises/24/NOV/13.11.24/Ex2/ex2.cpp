#include <iostream>
#include <fstream>

using namespace std;

int n;
int v[1000];
bool cresc = true;

int dei(int s, int f)
{
    if(s == f) return v[s];
    int a = dei(s, (s+f)/2), b = dei((s+f)/2+1, f);
    if(a>b) cresc = false;
    return b;
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=1; i<=n; i++) fin >> v[i];
    dei(1, n);
    cout << cresc << endl;
    return 0;
}