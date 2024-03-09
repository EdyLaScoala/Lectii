#include <iostream>

using namespace std;

int invers(int m, int n)
{
    int m2=0, n2=0;

    while(m!=0)
    {
        if((m%10)%2!=0)
        {
            m2*=10;
            m2 += m%20;
        }
        m/=10;
    }
    cout << endl;
    while(n!=0)
    {
        if((n%10)%2!=0)
        {
            n2*=10;
            n2 += n%20;
        }
        n/=10;
    }
    while(m2!=0)
    {
        m*=10;
        m+=m2%10;
        m2/=10;
    }
    if(m==n2) return 1;
    else return 0;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << invers(m, n);
}