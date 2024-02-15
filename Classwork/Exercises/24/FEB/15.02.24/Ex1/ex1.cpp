#include <iostream>
#include <cstring>

using namespace std;

void read(int v[], int n)
{
    for(int i=0; i<n; i++) cin >> v[i];
}

void show(int v[], int n)
{
    for(int i=0; i<n; i++) cout << v[i];
}

int del(int v[], int n, int k)
{
    for(int i=0; i<k-1; i++) v[i] = v[i+1];
    n--;
    return n;
}

int main()
{
    int x[50], n, k;
    read(x, n);
    show(x, n);
    if(n!=del(x, n, k)) n=del(x, n, k), show(x, n); else cout << "nu exista";
}