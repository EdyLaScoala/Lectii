#include <iostream>

using namespace std;

typedef char stack[100];
int k, ev, as;
int index = 0;

char chars[] = {'a', 'b', 'c', 'd', 'e'};
stack st;

void init()
{
    st[k] = '0';
}

int succesor()
{
    if(st[k] < chars[4]) 
    {
        st[k] = chars[index++];
        return 1;
    }
    else
    {
        k--;
        return 0;
    }
}

int valid()
{
    for(int i=0; i<k; i++)
    {
        if(st[k] == st[i] ) return 0;
        if(st[k] == 'a' && st[k-1]=='e' || st[k] == 'a' && st[k+1] == 'e') return 0;
    }
    return 1;
}

int solutie()
{
    return k==5;
}

void tipar()
{
    for(int i=1; i<=5; i++)
    {
        cout << st[i];
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
    bt();
}