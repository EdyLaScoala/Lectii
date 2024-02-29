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

int main()
{
    char s[255];
    cin.getline(s, 255);
    int n=strlen(s);
    int v[n];
    for(int i=0; i<n; i++)
    {
        v[i] = s[i];
    }
    
    upsort(v, n);

    downsort(v, n);

}