#include <iostream>

using namespace std;

int m, n, v[100], s;

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
    for(int i=0; i<k; i++)
        if(v[i] == v[k]) return false;
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
    int sum;
    for(int i=1; i<=n; i++) sum += v[i];
    
    return (k==m && sum==s);
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
    cin >> m >> n >> s;
    backtrack(1);
    return 0;
} 