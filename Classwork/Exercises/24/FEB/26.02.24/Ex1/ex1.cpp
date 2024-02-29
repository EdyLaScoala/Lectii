#include <iostream>
#include <cstring>

using namespace std;

void upsort(int v[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i], v[j]);
            }
        }
        cout << v[i] << " ";
    }
}

void downsort(int v[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]<v[j])
            {
                swap(v[i], v[j]);
            }
        }
        cout << v[i] << " ";
    }
}

void a()
{
    cout << "a)" << endl;
    int n;
    cin >> n;
    int v[9] = {0};
    while(n!=0)
    {
        v[n%10]++;
        n/=10;
    }
    for(int i=0; i<9; i++)
    {
        cout << i << " " << v[i] << " ";
    }
    cout << endl << endl;
}

void b()
{
    cout << "b)" << endl;
    int n, max=0;
    cin >> n;
    int v[9] = {0};
    while(n!=0)
    {
        v[n%10]++;
        if(v[n%10]>max) max++;
        n/=10;
    }
    for(int i=0; i<9; i++)
    {
        if(v[i]==max) cout << i << " ";
    }
    cout << endl << endl;
}

void c()
{
    cout << "c)" << endl;
    int m, n, mn=0, nn=0;
    cin >> n >> m;
    int a[n], b[m];
    while(n!=0)
    {
        a[nn]=n%10;
        nn++;
    }
    upsort(a, nn);
    while(m!=0)
    {
        a[mn]=m%10;
        mn++;
    }
    downsort(b, mn);
    cout << endl << endl;
}

int main()
{
    a();
    b();
}