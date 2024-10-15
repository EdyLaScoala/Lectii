#include <iostream>

using namespace std;

int n, v[100];

void init(int k)
{
    v[k] = 0;
}

int succesor(int k)
{
    if(v[k] < n) 
    {
        v[k]++;
        return 1;
    }
    else return 0;
}

int valid(int k)
{
    for(int i=0; i<k; i++)
    {
        if(v[k] == v[i] ) return 0;
    }
    return 1;
}

int solutie(int k)
{
    return k==n;
}

void tipar()
{
    for(int i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
            if(solutie(k)) tipar();
            else bt(k+1);
}

int main()
{
    cout << "n = "; cin >> n;
    bt(1);
}