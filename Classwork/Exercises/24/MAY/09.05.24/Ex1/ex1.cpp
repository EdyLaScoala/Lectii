#include <iostream>

using namespace std;

void f(int n, int x)
{
    if(x>n)
    {
        cout << 0;
    }
    else
    {
        if(x%4<=1)
        {
            f(n, x+1);
        }
        else
        {
            f(n, x+3);
            cout << 1;
        }
    }
}

int main()
{
    f(15, 2);

    return 0;
}