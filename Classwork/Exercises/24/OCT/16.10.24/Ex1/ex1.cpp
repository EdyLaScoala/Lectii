#include <iostream>

using namespace std;

int n, s = 0, v[100];

void init(int k)
{
    v[k] = k==1 ? 0 : v[k-1]-1;
}

void print(int k)
{
    for(int i=1; i<k; i++)
    {
        cout << v[i] << " + ";
    }
    cout << v[k] << endl;
    s -= v[k];
}

bool isValid(int k)
{
    if(s+v[k]<=n)
    {
        s += v[k];
        return true;
    }
    return false;
}

bool hasSuccesor(int k)
{
    if(v[k]<n-s)
    {
        v[k]++;
        return true;
    }
    else
    {
        s -= v[k-1];
        return false;
    } 
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
            if(isSolution(k)) print(k);
            else backtrack(k+1);
}

int main()
{
    cin >> n;
    backtrack(1);
    return 0;
}