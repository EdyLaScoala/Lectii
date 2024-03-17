#include <iostream>
#include <cstring>

using namespace std;

void multiplu(int a[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]%k==0)
        {
            for(int j=n; j>i; j--)
            {
                a[j] = a[j-1];
            }
            a[i+1]=k;
            n++;
            i++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[100]={0}, n=0, k=0;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    multiplu(a, n, k);
}
