#include <iostream>

using namespace std;

int f(int x, int y)
{
    if(x>y) return 0;
    else if(x%2!=0) return 1 + f(x+1, y);
    else return f(x+1, y);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << f(x, y);

    return 0;
} 
