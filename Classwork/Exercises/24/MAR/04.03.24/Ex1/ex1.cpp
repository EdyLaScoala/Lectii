#include <iostream>
#include <cstring>

using namespace std;

void c(int v[], int n)
{
    cout << "c)" << endl;
    cout << "k: ";
    int k=0;
    cin >> k;
    cout << "Max: " << k;
    for(int i=0; i<n; i++)
    {
        cout << v[i];
    }
    cout << endl << "Min: ";
    for(int i=0; i<n; i++)
    {
        cout << v[i];
    }
    cout << k;
    
}

void b(int v[], int n)
{
    cout << "b)" << endl;
    int a[10] = {0}, nr = 0;
    for(int i=0; i<n; i++)
    {
        if(a[v[i]]==0)
        {
            nr++;
        }
        a[v[i]]++;
    }
    cout << nr << " cifre distincte" << endl << endl;
    c(v, n);
}

void a(int n)
{
    cout << "a)" << endl;
    int v[9], i=0;
    for(i=0; n!=0; i++)
    {
        v[i] = n%10;
        n/=10;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout << v[j] << " ";
    }
    cout << endl << endl;
    b(v, i);
}

int main()
{
    int n=0;
    cin >> n;

    a(n);
}

// sirul cifrelor lui n, cate cifre distincte, cifra k citita > cel mai mic si cel mai mare numar care se poate obtineprin inserarea acesteia in sir