#include <iostream>
#include <cstring>

using namespace std;

int multiplu(int a[], int n, int k)
{
    int nr=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%k==0 && a[i]%10==k) nr++;
    }
    return nr;
}

int main()
{
    int a[100]={0}, n=0, k=0;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    cout << multiplu(a, n, k);
}

/*
    inserati pe k dupa valorile care il au ca multiplu pe k
*/