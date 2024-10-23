#include <iostream>

using namespace std;

int m, n, v[100];

void init(int k)
{
    v[k] = k==1 ? 0 : v[k-1];
}

void print()
{
    for(int i=1; i<=m; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool isValid(int k)
{
    return true;
}

bool hasSuccesor(int k)
{
    if(v[k]<n-m+k)
    {
        v[k]++;
        return true;
    }
    return false;
}

bool isSolution(int k)
{
    return k==m;
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
    cin >> m >> n;
    backtrack(1);
    return 0;
}