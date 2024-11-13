#include <iostream>
#include <fstream>



using namespace std;

int v[100];

void swap(int &a, int &b)
{
    int t=a;
    a = b;
    b = t;
}

void split(int s, int f, int &piv)
{
    int i = s, j = f, pi = 0, pj = 1;
    while(i<j)
    {
        if(v[i]>v[j])
        {
            swap(v[i], v[j]);
            swap(pi, pj);
        }
        i += pi;
        j -= pj;
    }
    piv = i;
}

void qs(int s, int f)
{
    int piv;
    if(s<f)
    {
        split(s, f, piv);
        qs(s, piv-1);
        qs(piv+1, f);
    }
}

int main()
{
    ifstream fin("date.in");
    int n;
    fin >> n;
    for(int i=0; i<n; i++) fin >> v[i];
    qs(0, n-1);
    for(int i=0; i<n; i++) cout << v[i] << " ";
}