#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a<c)
    {
        for(int i=a; i<=min(b, c); i++)
        {
            cout << i << " ";
        }
        for(int i=max(b, c); i<=d; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "c2" << endl;
        for(int i=c; i<=max(a, d); i++)
        {
            cout << i << " ";
        }
        for(int i=max(a, d)+1; i<=max(b, d); i++)
        {
            cout << i << " ";
        }
    }
}