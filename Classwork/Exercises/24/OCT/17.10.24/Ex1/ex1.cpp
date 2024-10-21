#include <iostream>
#include <math.h>

using namespace std;

int n, v[100];

void init(int k)
{
    v[k] = 0;
}

void print()
{
    for(int i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool isValid(int k)
{
    for(int i=1; i<=n; i++)
        if(v[k] == v[i] || abs(v[k]-v[i]) == k-i) return false;
    return true;
}

bool hasSuccesor(int k)
{
    if(v[k]<n)
    {
        v[k]++;
        return true;
    }
    return false;
}

bool isSolution(int k)
{
    return k==n;
}

void backtrack(int k)
{
    init(k);
    while(hasSuccesor(k))
        if(isValid(k))
            if(isSolution(k)) print();
            else backtrack(k+1);
}

int main()
{
    cin >> n;
    backtrack(1);
    return 0;
}