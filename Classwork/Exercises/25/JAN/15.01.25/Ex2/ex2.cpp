#include <iostream>
#include <fstream>

using namespace std;

int st[100], v[20][20], n, x, y, este=0;
ifstream fin("date.in"); 

void init(int k)
{
    st[k] = 0;
}

int succesor(int k)
{
    if(st[k] < n) 
    {
        st[k]++;
        return 1;
    }
    else return 0;
}

int valid(int k)
{
    if(k>1)
    {
        if(v[st[k-1]][st[k]]==0) if(v[st[k]][st[k-1]]==0 && v[st[k-1]][st[k]]==0) return 0;
        for(int i=1; i<k; i++) if(st[k] == st[i]) return 0;
        return 1;
    }
}

int solutie(int k)
{
    return k==n;
}

void tipar(int k)
{
    for(int i=1; (este = 1 && i<=k); i++)
    {
        cout << st[i] << " ";
    }
    cout << endl;
}

void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
            if(solutie(k)) tipar(k);
            else bt(k+1);
}

int main()
{
    fin >> n;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) fin >> v[i][j];
    for(int i=x; x<=n; x++) for(int y=1; x<=n; x++) if(x!=y) st[1] = x, bt(n);
    if(!este) cout << "Nu este";
}