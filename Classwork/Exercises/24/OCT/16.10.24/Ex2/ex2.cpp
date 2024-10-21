#include <iostream>
#include <fstream>

using namespace std;

int m, n, v[100];

void init(int k)
{
    v[k] = k==1 ? 0 : v[k-1];
}

void print()
{
    ifstream fin("date.in");
    string haine[100];
    int i=1; fin >> haine[1];
    while(fin >> haine[i]) i++;
    for(int i=1; i<=m; i++)
    {
        cout << haine[v[i]] << " ";
    }
    cout << endl;
    fin.close();
}

bool isValid(int k)
{
    for(int i=1; i<=m; i++)
        if(v[i]==v[k]) return false;
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
    for(int i=1; i<m; i++)
    {
        for(int j=i+1; j<=m; j++)
        {
            if(v[j] == 2 && v[i] == 1) return false;
            if(v[j] == 3 && v[i] == 2) return false;
            if(v[j] == 4 && v[i] == 6) return false;
        }
    }
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