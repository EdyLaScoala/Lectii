#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

void f(int a[], int b[], int m, int n)
{
    int nr = 0;
    int i=0, j=0;
    if(a[i] < b[j])
    {
        nr = a[i];
        i++;
        //cout << "i: " << i << " - " << nr << endl;
    }
    else
    {
        nr = b[j];
        j++;
        //cout << "j: " << j << " - " << nr << endl;
    }
    
    cout << nr << " ";
    int par = nr%2;
    while(i<m && j<n)
    {
        if(a[i]>nr) 
        {
            if(a[i]%2!=par && i<=m)
            {
                cout << a[i] << " ";
                nr=a[i];
                par = a[i]%2;
                i++;
                //cout << "i: " << i << " - " << nr << endl;
            }
            if(b[j]%2!=par && j<=n)
            {
                cout << b[j] << " ";
                nr = b[j];
                par = b[j]%2;
                j++;
                //cout << "j: " << j << " - " << nr << endl;
            } 
        }
        if(a[i]<nr) i++;
        if(b[j]>nr)
        {
            if(b[j]%2!=par && j<=n)
            {
                cout << b[j] << " ";
                nr = b[j];
                par = b[j]%2;
                j++;
                //cout << "j: " << j << " - " << nr << endl;
            } 
            if(a[i]%2!=par && i<=m)
            {
                cout << a[i] << " ";
                nr=a[i];
                par = a[i]%2;
                i++;
                //cout << "i: " << i << " - " << nr << endl;
            }
        }
        if(b[j]<nr) j++;
    }
}

int main()
{
    
    int a[100], b[100];
    int m, n;
    fin >> m >> n;
    for(int i=0; i<m; i++)
    {
        fin >> a[i];
    }
    for(int j=0; j<n; j++)
    {
        fin >> b[j];
    }
    
    f(a, b, m, n);

    return 0;
}