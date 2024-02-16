#include <iostream>

using namespace std;

int read(int v[], int n)
{
    for(int i=0; i<n; i++)
        cin >> v[i];
    return *v;
}

int sort(int v[], int n, string mode = "up")
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(mode == "up")
            {
                if(v[i]>v[j])
                    swap(v[i], v[j]);
            }
            else
                if(v[i]<v[j])
                    swap(v[i], v[j]);
        }
        cout << v[i] << " ";
    }
    return *v;
}

int main()
{
    int n=0;
    cin >> n;
    int v[n];
    read(v, n);
    sort(v, n);
}