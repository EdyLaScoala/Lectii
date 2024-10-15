#include <iostream>
#include <fstream>

using namespace std;

int m, n, v[100];
string ingredients[10];

void init(int k)
{
    v[k] = 0;
}

void load_ingredients()
{
    ifstream fin("date.in");
    int i=1;
    while(fin >> ingredients[i]) i++;
    fin.close();
}

void print()
{
    for(int i=1; i<=m; i++)
    {
        cout << ingredients[v[i]] << " ";
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
    for(int i=1; i<=3; i++)
    {
        if(v[i]>3)
        {
            return false;
        }
    }
    if(v[4]<4 || v[4]>6) 
    {
        return false;
    }
    else if(v[5]<7) 
    {
        return false;
    }
    if(v[5] == 9 && (v[4] == 6)) return false;
    if(v[4] == 6 && (v[5] == 9)) return false;
    return true;
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
    m=5, n=9;
    load_ingredients();
    backtrack(1);
    return 0;
} 









