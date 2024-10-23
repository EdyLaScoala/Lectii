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

/*

{1, 2, 3} - {4, 5} - {6, 7, 8, 9}

6, 8 - 4
7, 9 - 5

1 2 3 4 6
1 2 3 4 8
1 2 3 5 7
1 2 3 5 9
1 3 2 4 6
1 3 2 4 8
1 3 2 5 7 - culegeri notite manuale interviuri sunet - a) 
1 3 2 5 9


*/