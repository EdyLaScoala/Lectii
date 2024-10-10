#include <iostream>
#include <fstream>

using namespace std;

int m, n, v[100];
string colors[100];

ifstream fin("data.in");

// alb, galben, verde, rosu, albastru, negru

void load_colors()
{
    int i=0;
    while(fin >> colors[i]) i++;
}

void init(int k)
{
    v[k] = 0;
}

void print()
{
    for(int i=1; i<=m; i++)
    {
        cout << colors[i] << " ";
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
    if(v[m/2] == 1 ||  v[m/2] == 3 || v[m/2] == 4) return k==m;
    else return false;
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
    load_colors();
    cout << "Introduceti numarul de culori de pe steag: "; cin >> m;
    cout << "Introduceti numarul de culori valabile: "; cin >> n;
    backtrack(1);
    return 0;
} 