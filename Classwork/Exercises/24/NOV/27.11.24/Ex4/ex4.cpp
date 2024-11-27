#include <iostream>

using namespace std;

void hanoi(int n, char a, char b, char c)
{
    if(n==1) cout << "Mutarea " << a << " -> " << b << endl;
    else
    {
        hanoi(n-1, a, c, b);
        cout << "Mutarea " << a << " -> " << b << endl;
        hanoi(n-1, c, b, a);
    }
}

int main()
{
    int n;
    char a='A', b='B', c='C';
    cin >> n;
    hanoi(n, a, b, c);
}