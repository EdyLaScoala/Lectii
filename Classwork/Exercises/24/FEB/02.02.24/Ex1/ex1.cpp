#include <iostream>
#include <cstring>

using namespace std;

int suma(int& n, int& a)
{
    int s=0;
    while(n!=0)
    {
        if(n%10==a) s+=n%10, n/=10;
    }
    cout << "Valoare x: " << n << endl;
    return s;
}

int main()
{
    int n, a;
    cin >> n >> a;
    cout << suma(n, a) << endl;
    cout <<"Valoare x din main: " << n;
}

//par 2 de tip a, sa returneze suma cifrelor impare din valoarea data