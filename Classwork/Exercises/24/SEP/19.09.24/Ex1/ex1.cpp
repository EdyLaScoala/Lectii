#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n, x, cont = 1;
    fin >> x;
    while(fin >> n)
    {
        if(n!=x)
        {
            cout << x << " " << cont << " ";
            cont = 1;
            x = n;
        }
        else
        {
            cont++;
        }
    }
    cout << n << " " << cont;
}