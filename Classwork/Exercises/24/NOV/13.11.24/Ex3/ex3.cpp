#include <iostream>
#include <fstream>

using namespace std;

int st[100];
int n, m, k, ev, as;
void init()
{
    if(k==1)
        st[k]=0;
    else
        st[k]=st[k-1];
}

int succesor()
{
    //else
    return 0;
}

int valid()
{
    for(int i=1; i<=k; i++)
        if(st[k]==st[k-1]) return 0;
    return 0;
}
int solutie()
{
    for(int i=1; i<m; i++)
    {
        if(st[k]==2)
        {
            for(int j=i+1; j<=m; j++)
            {
                if(st[j]==1) return 0;
            }
        }
        else if(st[k]==3)
        {
            for(int j = i+1; j<=m; j++)
            {
                if(st[j]==2) return 0;
            }
        }
        else if(st[k]==4)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(st[j]==6) return 0;
            }
        }
    }
    return k==m;
}

void tipar()
{
    string haine[100];
    ifstream fin("date.in");
    int i=1; cin >> n;
    while(fin >> haine[i]) i++;
    for(i=1 ; i<=m; i++) cout << haine[st[k]] << " ";
    fin.close();
}

void bt()
{
    k=1;
    init();
    while(k>0)
    {
        as=1; ev=0;
        while(as && !ev)
        {
            as = succesor();
            if(as) ev = valid();
        }
        if(as)
            if(solutie())
                tipar();
            else
            {
                k++;
                init();
            }
        else k--;
    }
}

int main()
{
    cin >> m >> n;
    bt();
    return 0;
}