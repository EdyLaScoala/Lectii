#include <iostream>

using namespace std;

int f(int n)
{
    int sum=0;
    for(int i=2; n!=0 && i<=n; i++)
    {
        while(n%i==0) n/=i, sum++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << f(n);
    return 0;
}

/*

1 2 3
2 1 3
2 3 1
1 3 2
3 1 2
3 2 1


abc  =>
axb
bxc
axc
axb
bxc

*/