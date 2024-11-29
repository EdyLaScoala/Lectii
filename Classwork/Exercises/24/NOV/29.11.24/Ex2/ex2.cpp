#include <iostream>
#include <fstream>

using namespace std;

int v[100], n;

void swap(auto &a, auto &b)
{
    auto t=a;
    a = b;
    b = t;
}

void merge(int s, int d, int m)
{
    int i=s, j=m+1, k=1, v2[100];
    while(i<=m && j<=d)
    {
        if(v[i]<v[j])
        {
            v2[k] = v[i];
            i++;
        }
        else
        {
            v2[k] = v[j];
            j++;
        }
        if(v[i]%2>v[j]%2)
        {
            v2[k] = v[i];
            i++;
        }
        else
        {
            v2[k] = v[j];
            j++;
        }
        
        k++;
    }
    if(i<=m)
    {
        while(i<=m)
        {
            v2[k] = v[i]; i++; k++;
        }
    }
    else
    {
        while(j<=d)
        {
            v2[k] = v[j]; j++; k++;
        }
    }
    for(k=1, i=s; i<=d; k++, i++)
    {
        v[i] = v2[k];
    }
}

void ms(int s, int f)
{
    int m;
    if(s<f)
    {
        m = (s+f)/2;
        ms(s, m);
        ms(m+1, f);
        merge(s, f, m);
    }
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++) fin >> v[i];
    ms(0, n-1);
    for(int i=0; i<n; i++) cout << v[i] << " ";
    return 0;
}