#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    ofstream fout("nr.txt");
    while(n!=0)
    {
        fout << n << " ";
        n/=10;
    }

    return 0;
}