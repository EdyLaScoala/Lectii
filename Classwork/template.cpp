#include <iostream>
#include <cstring>

using namespace std;

int read(int v[], int n)
{
    for(int i=0; i<n; i++)
        cin >> v[i];
    return *v;
}

int main()
{
    int n=0;
    cin >> n;

    int v[n];
    read(v, n);

    

    return 0;
}