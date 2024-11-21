#include <iostream>
#include <fstream>

using namespace std;

int v[100][100], n;

void combina(int a, int b, int &res)
{
    res = a+b;
}

void div(int s, int f, int &mij)
{
    mij = (s+f)/2;
}

void dei(int s, int f, int i)
{
    int mij;
    if(s==f)
    {
        if(s<i) cout << v[i][s] << " ";
        return;
    }

    div(s, f, mij);

    dei(s, mij, i);
    dei(mij+1, f, i);
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) fin >> v[i][j];
    for(int i=0; i<n; i++) dei(0, n-1, i);
    return 0;
}