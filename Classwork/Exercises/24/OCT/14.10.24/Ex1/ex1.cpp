#include <iostream>

using namespace std;

int m, n, v[100];

void init(int k)
{
    v[k] = 0;
}

void print()
{
    for(int i=1; i<=m; i++)
    {
        cout << v[i];
    }
    cout << endl;
}

bool isValid(int k)
{
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
    for(int i=1; i<=5; i++)
    {
        cout << v[i] << " ";
        if(v[i]%2!=0 && v[i+1]%2!=0)
        {
            return true;
        }
        cout << endl;
    }
    return false;
}

int backtrack(int k)
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