#include <iostream>

using namespace std;

int main()
{
    struct punct
    {
        float x, y;
    }a, b;

    cin >> a.x >> a.y >> b.x >> b.y;
    if(a.y==b.y) cout << "DA"; else cout << "NU";
}