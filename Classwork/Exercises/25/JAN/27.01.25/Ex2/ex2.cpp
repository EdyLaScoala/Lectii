#include <iostream>

using namespace std;

int main()
{
    int n, m=10, c;
    cin >> n;
    if(n==0)
    {
        m=0;
    }
    else
    {
        do
        {
            c = n%10;
            n = n/10;
            if(c<=m) m=c; else m=-1;
        } while (n!=0);
        
    }
    cout << m;
}