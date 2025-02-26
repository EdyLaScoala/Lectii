#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, nr=0;
    cin >> a >> b >> c >> d;
    nr = 1000*((a/1000)%10) +100*((b/100)%10) + 10*((c/10)%10) + d%10;
    cout << nr;
}