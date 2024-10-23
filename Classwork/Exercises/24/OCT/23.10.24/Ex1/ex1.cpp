#include <iostream>
#include <cstring>

using namespace std;

int m, n, v[100];

string dishes[10];

void init(int k)
{
    v[k] = 0;
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
    for(int i=0; i<k; i++)
    {
        if(v[k] == v[i] ) return false;
    }
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

/*

1, 2, 3, 4, 5, 6

1 < 2
2 < 5
3, 6 < 4

1 2 3 5 6 4
1 2 3 6 4 5
1 2 3 6 5 4
1 2 5 3 6 4
1 2 5 6 3 4
1 2 6 3 4 5 - ciuperci legume tort pere panacota salata - c)


*/