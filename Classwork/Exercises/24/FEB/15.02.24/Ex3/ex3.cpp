#include <iostream>

using namespace std;

int read(int v[], int n)
{
    for(int i=0; i<n; i++)
        cin >> v[i];
    return *v;
}

int search(int v[], int n, int k)
{
    int apar = 0;
    for(int i=0; i<n; i++) if(v[i]==k) apar++;
    return apar;
}

int main()
{
    int n=0, k=0;
    cin >> n >> k;
    int v[n];
    read(v, n);
    cout << search(v, n, k);
}