#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];

    int fibbo[15];

    int a=1, b=1, c=1;
    for(int i=0; i<n; i++)
    {
        fibbo[i]=c;
        c=a+b;
        a=b;
        b=c;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
            if(v[i]==fibbo[j] && v[++i]==fibbo[++j])
                cout << v[i-1] << ", " << v[i] << endl;
    }

    return 0;
}