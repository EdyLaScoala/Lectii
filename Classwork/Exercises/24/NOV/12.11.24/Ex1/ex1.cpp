#include <iostream>
#include <fstream>

using namespace std;

int n;
float v[1000];

float srcsum(int s, int f)
{
    if(s == f) return v[s];
    else return srcsum(s, (s+f)/2) + srcsum((s+f)/2+1, f);
}

// 1 + 1/1+2 + 1/1+4 + 1/1+6 + ... + 1/1+2n

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=1; i<=n; i++) v[i] = (float)1/(1+2*i);
    cout << srcsum(1, n);
    return 0;
}
