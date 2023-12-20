#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((0-b)-sqrt(b*b-4*a*c))/2;
}