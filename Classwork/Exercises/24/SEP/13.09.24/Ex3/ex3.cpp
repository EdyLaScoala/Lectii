#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

bool prim(int& n)
{
    for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
    return true;
}

int f(int n){for(int i=2; i<=n; i++) if(prim(i) && n%i==0) return i;}

int main()
{
    int n=0;
    ifstream fin("date.in");
    fin >> n;
    int nr, v[100], index=0;

    while(fin >> nr) if(f(nr) == nr) v[index++]=nr;
    if(index == 0)
    {
        cout << "nu exista";
        return 0;
    }
    for(int i=0; i<index; i++)
    {
        for(int j=i+1; j<index; j++) if(v[i]>v[j]) swap(v[i], v[j]);
        cout << v[i] << " ";
    }



    return 0;
}