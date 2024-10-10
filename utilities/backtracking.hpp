#include <iostream>

using namespace std;

typedef int stack[100];
int n, k, ev, as;
stack st;

void init()
{
    st[k] = 0;
}

int succesor()
{
    if(st[k] < n) 
    {
        st[k]++;
        return 1;
    }
    else return 0;
}

int valid()
{
    for(int i=0; i<k; i++)
    {
        if(st[k] == st[i] ) return 0;
    }
    return 1;
}

int solutie()
{
    return k==n;
}

void tipar()
{
    for(int i=1; i<=n; i++)
    {
        cout << st[i] << " ";
    }
    cout << endl;
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
            if(as) ev=valid();
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
    cout << "n = "; cin >> n;
    bt();
}