#include <iostream>

using namespace std;

void dei(int n, int &z)
{
    //cout << z << endl;
    int x1, x2;
    if(n==0 || n == 2) z=2;
    else
    {
        dei(n-2, x1);
        dei(n-4, x2);
        z = x1 + x2;
        cout << z << endl;
    }
}

int main()
{
    int z=0;
    int n;
    cin >> n;
    dei(2*n, z);
    cout << z;
    return 0;
}