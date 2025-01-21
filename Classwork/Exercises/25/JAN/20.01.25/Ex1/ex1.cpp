#include <iostream>
#include <fstream>

using namespace std;

int st[100], a[20][20], n, x, y, este=0, v[20];
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
        if(a[st[k-1]][st[k]]==0) if(a[st[k]][st[k-1]]==0 && a[st[k-1]][st[k]]==0) return 0;
        for(int i=1; i<k; i++) if(st[k] == st[i]) return 0;
        return 1;
    }
}

int solutie(int k)
{
    return st[k]==n;
}

void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
            if(solutie(k)) este=1;
            else bt(k+1);
}

int main()
{
    int m=0;
    fin >> n;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) fin >> a[i][j];
    for(int i=x; x<=n; x++) 
        if(v[x] == 0)
        {
            m++, st[1]=x, v[x] = 1;
            cout << m << " - " << x << endl;
            for(int y=1; x<=n; x++)
                if(x!=y)
                {
                    este=0;
                    bt(y);
                    if(este)
                    {
                        v[y]=1;
                        cout << y << endl;
                    }
                }
            cout << endl;
        }
}