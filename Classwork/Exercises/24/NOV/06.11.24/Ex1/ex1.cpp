#include <iostream>
#include <fstream>

using namespace std;

void swap(bool cond, int &a, int &b)
{
    if(cond)
    {
        int t=a;
        a = b;
        b = t;
    }
}

void sort(int v[], int n)
{
    for(int i=0; i<n-1; i++) for(int j=i+1; j<n; j++) swap((v[i]>v[j]), v[i], v[j]);
}

void getVectors(int a[], int b[], int m, int n)
{
    ifstream fin("date.in");
    for(int i=0; i<m; i++) fin >> a[i];
    for(int i=0; i<n; i++) fin >> b[i];
}

bool binsrc(int v[], int n, int nr)
{
    int pos = n/2, s=0, f=n;
    
    while(v[pos]!=nr && f-s>=2)
    {
        if(v[pos]>nr) f = (s+f)/2;
        else if(v[pos]<nr) s = (s+f)/2;
        pos = (s+f)/2;
    }

    if(f-s>=2) return true; return false;
}

void runLogic(int m, int n, int v[], int v2[])
{
    getVectors(v, v2, m, n);
    sort(v2, n);
    for(int i=0; i<m; i++) if(binsrc(v2, n, v[i])) cout << v[i] << " ";
}

int main()
{
    ifstream fin("date.in");
    int m, n;
    fin >> m >> n;
    int v[m], v2[n];
    runLogic(m, n, v, v2);

    return 0;
}