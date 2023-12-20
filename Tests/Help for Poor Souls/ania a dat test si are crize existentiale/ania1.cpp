#include <iostream>

using namespace std;

int main()
{
    int n=0, inv=0, cn=0, palmax=0, cont=0;
    cin >> n;
    while (n>0)
    {
        cn = n;
        while(cn>0)
        {
            inv = inv*10 + cn;
            cn/=10;
        }
        if(inv==cn)
        {
            palmax=cn;
            cont++;
        }
        else
        {
            cont = 0;
        }
        cin >> n;
    }
    if(palmax!=0)
    {
        cout << palmax << " " << cont;
    }
    else
    {
        cout << "NU EXISTA";
    }
}