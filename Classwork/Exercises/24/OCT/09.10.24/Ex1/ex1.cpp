#include <iostream>
#include <fstream>

using namespace std;

int m, n, v[100];
string colors[100];

ifstream fin("date.in");

// se pot adauga infinite culori

int load_colors()
{
    int i=1;
    while(fin >> colors[i]) i++;
    return i-1;
}

void init(int k)
{
    v[k] = 0;
}

void print()
{
    for(int i=1; i<=m; i++)
    {
        cout << colors[v[i]] << " ";
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
    if(m%2==0) if(v[m/2] == 1 ||  v[m/2] == 3 || v[m/2] == 4) return k==m;
    else return false;
    else if(v[m/2+1] == 1 ||  v[m/2+1] == 3 || v[m/2+1] == 4) return k==m;
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
    int available = load_colors();
    cout << "Introduceti numarul de culori de pe steag: "; cin >> m;
    cout << "Aveti " << available <<" culori la dispozitie. Introduceti numarul de culori valabile: "; cin >> n;
    backtrack(1);
    return 0;
}
