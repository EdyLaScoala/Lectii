#include <iostream>

using namespace std;

int read(int v[], int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        if(v[i]>max) max=v[i];
    }
    return max;
}

int remove(int v[], int n, int pos)
{
    for(int i=pos-1; i<n-1; i++)
    {
        v[i] = v[i+1];
    }
    n--;
    return n;
}

int main()
{
    int n=0;
    cin >> n;

    int v[n];

    int max = read(v, n);

    for(int i=0; i<n; i++)
    {
        if(v[i]==max)
        {
            n = remove(v, n, i);
        }
        cout << v[i] << " ";
    }

    return 0;
}