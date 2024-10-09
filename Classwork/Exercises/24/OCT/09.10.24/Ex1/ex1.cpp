#include <iostream>

using namespace std;

int m, n, v[100];

void init(int i)
{
    v[i]=0;
}

void print()
{
    for(int i=1; i<=m; i++)
    {
        cout << v[i];
    }
    cout << endl;
}

bool isSuccessor(int k)
{
    if(v[k]<n)
    {
        v[k]++;
        return true;
    }
    return false;
}

bool isValid(int k)
{
    for(int i=0; i<k; i++)
    {
        if(v[k] == v[i] ) return 0;
    }
    return 1;
}

bool isSolution(int k)
{
    return k == m;
}

void backtrack(int k)
{
    init(k);
    while(isSuccessor(k))
        if(isValid(k))
            if(isSolution(k)) print();
            else backtrack(k+1);

}

int main()
{
    cout << "m = "; cin >> m;
    cout << endl << "n = "; cin >> n;

    backtrack(1);
    return 0;
}