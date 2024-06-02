#include <iostream>

using namespace std;

int main()
{
    int a[101], n, k, b, i, m;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    cin >> k >> m;
    for(i=n+1; i>k; i--)
    {
        a[i]=a[i-1];
    }
    a[k]=m;
    for(i=1; i<=n+1; i++)
    {
        cout << a[i] << " ";
    }
}