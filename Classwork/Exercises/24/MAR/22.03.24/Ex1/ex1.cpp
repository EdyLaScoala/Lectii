#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int v[n];
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int res=0, ult=1;
    for(int i=0; i<n; i++)
    {
        if((ult*v[i])%10==0)
        {
            res++;
        }
        ult = (ult*v[i])%10;
        cout << ult;
    }
    cout << endl;
    cout << res;
}