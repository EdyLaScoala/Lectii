#include <iostream>

using namespace std;

int f(unsigned long long n, int k)
{
    if(n!=0)
        if(n%10==k) return 1 + f(n/10, k);
    return 0;
}

int main()
{
    cout << f(47770777, 7) << endl;
    //cout << "3" << endl;
    return 0;
}